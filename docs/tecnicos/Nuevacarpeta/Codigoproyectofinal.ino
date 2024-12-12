#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal_I2C.h> // Librería para LCD con I2C

const int boyaPin = 2;     // Pin donde está conectada la boya
const int bombaPin = 8;    // Pin donde está conectada la bomba

const int oneWireBus = 10;  // Pin donde está conectado el bus de datos del DS18B20
const int triggerPin = 12;  // Pin donde está conectado el trigger del HC-SR04
const int echoPin = 13;     // Pin donde está conectado el echo del HC-SR04

// Pines para las luces (LEDs)
const int luz1Pin = 4;  // Luz 1 (distancia entre 0 y 5 cm)
const int luz2Pin = 5;  // Luz 2 (distancia entre 5 y 10 cm)
const int luz3Pin = 6;  // Luz 3 (distancia entre 10 y 15 cm)

OneWire oneWire(oneWireBus); // Configura la comunicación con el sensor DS18B20
DallasTemperature sensors(&oneWire); // Instancia para leer la temperatura

LiquidCrystal_I2C lcd(0x27, 16, 2); // Dirección 0x27, 16 columnas y 2 filas

bool bombaEncendida = false; // Estado de la bomba
bool boyaAnterior = HIGH;    // Estado anterior de la boya

void setup() {
  pinMode(boyaPin, INPUT_PULLUP); // Configura el pin de la boya como entrada con resistencia pull-up
  pinMode(bombaPin, OUTPUT);      // Configura el pin de la bomba como salida
  digitalWrite(bombaPin, LOW);    // Asegúrate de que la bomba está apagada al inicio
  
  pinMode(triggerPin, OUTPUT);    // Configura el pin de Trigger del HC-SR04
  pinMode(echoPin, INPUT);        // Configura el pin de Echo del HC-SR04

  // Configuración de las luces (LEDs)
  pinMode(luz1Pin, OUTPUT);  // Configura el pin de la luz 1
  pinMode(luz2Pin, OUTPUT);  // Configura el pin de la luz 2
  pinMode(luz3Pin, OUTPUT);  // Configura el pin de la luz 3
  
  // Inicializa el monitor serial y los sensores de temperatura
  Serial.begin(9600);
  sensors.begin();
  
  // Inicializa la pantalla LCD
  lcd.begin(16, 2);  // Configura la pantalla LCD con 16 columnas y 2 filas
  lcd.backlight();   // Enciende la retroiluminación del LCD
}

void loop() {
  int estadoBoya = digitalRead(boyaPin); // Lee el estado actual de la boya

  // Detecta un cambio de HIGH a LOW en la boya (transición para encender la bomba)
  if (estadoBoya == LOW && !bombaEncendida) {
    digitalWrite(bombaPin, HIGH);  // Enciende la bomba
    bombaEncendida = true;         // Marca la bomba como encendida
  }
  else {
    digitalWrite(bombaPin, LOW);   // Apaga la bomba
    bombaEncendida = false;        // Cambia el estado de la bomba a apagada
  }

  delay(10000); // Espera 10 segundos
  
  // Lee la temperatura del sensor DS18B20
  sensors.requestTemperatures(); // Pide la temperatura
  float temperatura = sensors.getTempCByIndex(0); // Obtiene la temperatura en °C del primer sensor

  // Muestra la temperatura en el monitor serial
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");
  
  // Muestra la temperatura en la pantalla LCD
  lcd.clear();                     // Limpia la pantalla LCD
  lcd.setCursor(0, 0);             // Mueve el cursor a la primera fila y primera columna
  lcd.print("Temp: ");             // Escribe "Temp: "
  lcd.print(temperatura);          // Muestra la temperatura
  lcd.print(" C");                 // Muestra el símbolo de grados Celsius
  
  // Medir la distancia usando el HC-SR04
  long distancia = medirDistancia(); // Llama a la función que mide la distancia

  // Muestra la distancia en el monitor serial
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");
  
  // Muestra la distancia en la pantalla LCD
  lcd.setCursor(0, 1); // Mueve el cursor a la segunda fila
  lcd.print("Dist: ");
  lcd.print(distancia); // Muestra la distancia
  lcd.print(" cm");
  
  // Encender luces dependiendo de la distancia
  if (distancia >= 0 && distancia <= 5) {
    digitalWrite(luz1Pin, HIGH);  // Enciende la luz 1 (0-5 cm)
    digitalWrite(luz2Pin, LOW);   // Apaga la luz 2
    digitalWrite(luz3Pin, LOW);   // Apaga la luz 3
  }
  else if (distancia > 5 && distancia <= 10) {
    digitalWrite(luz1Pin, LOW);   // Apaga la luz 1
    digitalWrite(luz2Pin, HIGH);  // Enciende la luz 2 (5-10 cm)
    digitalWrite(luz3Pin, LOW);   // Apaga la luz 3
  }
  else if (distancia > 10 && distancia <= 15) {
    digitalWrite(luz1Pin, LOW);   // Apaga la luz 1
    digitalWrite(luz2Pin, LOW);   // Apaga la luz 2
    digitalWrite(luz3Pin, HIGH);  // Enciende la luz 3 (10-15 cm)
  }
  else {
    // Si la distancia es mayor de 15 cm, apaga todas las luces
    digitalWrite(luz1Pin, LOW);
    digitalWrite(luz2Pin, LOW);
    digitalWrite(luz3Pin, LOW);
  }

  delay(2000);  // Espera 2 segundos antes de actualizar la pantalla
}

// Función para medir la distancia con el HC-SR04
long medirDistancia() {
  // Enviar un pulso de 10 microsegundos al pin Trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  // Leer el tiempo de retorno del pulso del pin Echo
  long duracion = pulseIn(echoPin, HIGH);
  
  // Calcular la distancia (velocidad del sonido ~343 m/s, 0.0343 cm/µs)
  long distancia = (duracion * 0.0343) / 2;
  
  return distancia;
}
