#include <WiFi.h>
#include <PubSubClient.h>

const char* ssid = "LES-publica";
const char* password = "LES-invitado";
WiFiClient wifiClient;

const char* mqttBroker = "broker.hivemq.com";
const char* mqttClientName = "josep"; // Nombre del cliente MQTT
const char* mqttUser = ""; 
const char* mqttPass = ""; 
const char* draw_topic = "efdi/sensores/josep"; // Tema MQTT para enviar los datos
PubSubClient mqttClient(wifiClient);

// Pines para el sensor HC-SR04
const int trigPin = 5;
const int echoPin = 18;

// Pines para los LEDs
const int ledPin1 = 25;         // LED 1
const int ledPin2 = 26;         // LED 2
const int ledPin3 = 27;         // LED 3
const int ledPin4 = 32;         // LED 4

void mqttConnect() {
  while (!mqttClient.connected()) {
    Serial.print("Intentando conectar a MQTT...");
    if (mqttClient.connect(mqttClientName, mqttUser, mqttPass)) {
      Serial.println("Conectado a MQTT");
    } else {
      Serial.print("Error, rc=");
      Serial.print(mqttClient.state());
      Serial.println(" Reintentando en 5 segundos");
      delay(5000);
    }
  }
}

void callback(char* topic, byte* payload, unsigned int length) {
  String incomingMessage = "";
  for (int i = 0; i < length; i++) {
    incomingMessage += (char)payload[i];
  } 
  Serial.println("Mensaje recibido [" + String(topic) + "]: " + incomingMessage);
}

void setup() {
  Serial.begin(115200);
  Serial.println("Inicializando...");

  // Configuración de WiFi
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  Serial.print("\nConectado a ");
  Serial.println(ssid);
  Serial.print("Dirección IP: ");
  Serial.println(WiFi.localIP());
  
  // Configuración de MQTT
  mqttClient.setServer(mqttBroker, 1883);
  mqttClient.setCallback(callback);

  // Configuración de los pines de los LEDs
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);

  // Asegurarse de que los LEDs estén apagados inicialmente
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);

  // Configuración del sensor HC-SR04
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

unsigned long lastMsg = 0;
char msg[50];

long readDistance() {
  // Enviar un pulso en el pin TRIG
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Medir el tiempo que tarda en recibir el eco
  long duration = pulseIn(echoPin, HIGH);

  // Calcular la distancia en centímetros (tiempo * velocidad del sonido / 2)
  long distance = duration * 0.034 / 0.2; // Velocidad del sonido = 0.034 cm/µs

  return distance;
}

void loop() {
  // Verificar la conexión MQTT
  if (!mqttClient.connected()) {
    mqttConnect();
  }
  mqttClient.loop();

  // Publicación de datos del sensor de distancia
  unsigned long now = millis();
  if (now - lastMsg > 1000) {  // Enviar datos cada segundo
    lastMsg = now;

    // Leer la distancia del sensor HC-SR04
    long distancia = readDistance();

    // Mostrar el valor de distancia en el monitor serial
    Serial.print("Distancia: ");
    Serial.print(distancia);
    Serial.println(" mm");

    // Mapeo de la distancia a la cantidad de LEDs a encender
    if (distancia <= 100) {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin4, LOW);
    } else if (distancia <= 200) {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin4, LOW);
    } else if (distancia <= 300) {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, LOW);
    } else if (distancia <= 400) {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, HIGH);
    } else {
      // Si la distancia es mayor a 15 cm, apaga todos los LEDs
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin4, LOW);
    }

    // Enviar el valor de distancia al servidor MQTT
    snprintf(msg, 50, "%ld", distancia);
    mqttClient.publish(draw_topic, msg, true);
  }
}
