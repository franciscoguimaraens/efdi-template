---
hide:
    - toc
---

# Proyecto



Al concluir las pruebas e investigaciones anteriores y llegar a un resultado aceptable, donde el prototipo cumple y satisface las distintas características, principalmente la capacidad para producir un volumen de agua apta para el consumo humano continue realizando un prototipo final. Las características y medidas de este son idénticas al prototipo anterior, pero este contiene mecanismos electrónicos y automatización. También este fue diseñado y creado con máquinas de precisión como lo son las cortadoras laser e impresoras 3D.

Construcción:

El prototipo final está constituido de dos cajas de maderas de MDF de 3mm, donde la caja interna y externa están separadas en sus laterales y base por 4cm de aislante térmico (Espuma plas). La parte superior está constituida por dos vidrios la cual permite el paso de la radiación solar y el aislamiento térmico con el exterior. 
La caja interna en su interior esta pintada de negro y esta recubierta con un nylon plástico para evitar las fugas de agua. En el interior de esta contiene 2cm de grava negra la que ayuda a la conservación de energía.
Este también consta de una caja estanca donde está instalado un Arduino uno para la automatización y control del desalinizador.

<strong>Modelado 2D y 3D:</strong>

Para el diseño y modelado utilice el programa fuison 360, con este realice todos los diseños que se mostraran a continuación.
Me permitió realizar construcciones en 2D para luego extruirlas y ensamblarlas para verificar antes de traerlos a la realidad si cumplían con lo requerido.

<em>Caja interior:</em>

![](../images/Proyecto/Producto%20fianl/subir%202.PNG)

En la imagen se puede apreciar el primer diseño realizado. Este es el diseño de la caja interior del desalinizador, su base y sus laterales están diseñadas para ser encastradas unas con otras sin necesidad de utilizar ningún pegamento ni otro objeto.

<em>Caja exterior:</em>

![](../images/Proyecto/Producto%20fianl/subir%201.PNG)
Agregar foto de cuña

Acá podemos ver el diseño de la caja exterior la cual está constituida por una base y sus caras laterales. La caja está diseñada de tal forma que encastren una pieza con otra y para mantener su estructura y rigidez se le colocan cuñas.
Esta caja es la encargada de soportar todas las fuerzas internas provocadas por el agua y los objetos.

<em>Caja estanca y soporte:</em>

Para mantener el Arduino y sus componentes juntos y fuera del alcance de los rayos del sol diseñe una caja estanca la cual para su construcción utilice una impresora 3D.
Esta está constituida por una caja y una tapa, la cual esta última está diseñada para contener una pantalla LCD y 3 luces led necesarias para mostrar información de los sensores.
El soporte fue diseñado para sostener uno de los sensores dentro de la caja del desalinizador el cual debía de estar bien sujeto ya que iba a estar en contacto con el agua.  


![](../images/Proyecto/Producto%20fianl/caja%20estanca%20dsieño.PNG)


<strong>Cortes e impresion en 3D</strong>

Para los cortes de las cajas utilice una cortadora laser la cual me permitió realizar cortes precisos, también realice un grabado con el nombre de "Desalinizador solar" y dos logos en la cara frontal de la caja exterior. Como parámetros para los cortes Utilice una potencia de 75% y una velocidad de 15mm/s, el grabado lo realice con una potencia de 10% y una velocidad de 300mm/s.
La impresión en 3D la realice con una impresora RAISED Pro3 Plus con filamento blanco.



![](../images/Proyecto/Producto%20fianl/cortes.PNG)

![](../images/Proyecto/Producto%20fianl/piezas.PNG)

![](../images/Proyecto/Producto%20fianl/caja.PNG)


Archivos .dxf <a href="../proyecto/Archivos/Exterior.zip" download="Caja Exterior"> <strong>Caja exterior</strong> </a>

Archivos .dxf <a href="../proyecto/Archivos/Interior.zip" download="Caja Interior"> <strong>Caja interior</strong> </a>

Archivos .stl <a href="../proyecto/Archivos/Caja_estanca.zip" download="Caja_estanca"> <strong>Caja estanca</strong> </a>

Archivos .stl <a href="../proyecto/Archivos/Soporte.stl" download="Soporte"> <strong>Soporte sensor</strong> </a>


<strong>Electrónica y Programación</strong>

Para la automatización y programación del proceso y los sensores utilice Arduino Uno.
Utilice un sensor de nivel de agua (bolla), dos bomba de agua, un sensor de temperatura y un sensor de ultrasonido.
El sensor de nivel de agua está ubicado dentro de la caja interior del desalinizador el cual mediante una boya envía una señal de la altura del agua dentro. Esta cuando envía una señal de bajo nivel al Arduino, enciende la bomba que está ubicada en el depósito de agua exterior. Cuando el sensor le indica al Arduino que el agua llego a su altura optima, este apaga la bomba para que no siga ingresando más agua.
El sensor de temperatura nos indica a la temperatura que se encuentra el agua en el depósito del agua producida, ya que este al salir del desalinizador se encuentra a una temperatura muy elevada y puede ser peligrosa al intentar ingerirla. Este Resultado lo podemos ver impreso en la pantalla LCD ubicado en la caja estanca junto con la altura en centímetros del agua dentro del recipiente. Aparte de esto hay 3 luces LED (Roja, Amarilla y Azul) que nos indica de manera visual la cantidad de agua que tenemos producida, donde el color rojo nos indica una cantidad de agua baja, en amarillo cuando la cantidad de agua es media y en azul cuando tenemos una buena cantidad de agua producida lista para ser consumida.
Dentro de la caja esta instalada una boba de agua que tiene como funcion sacar el agua del desalinizador para realizarle una limpieza, esta bomba es accionada por un interruptor que se encuentra fuera de la caja estanca.


![](../images/Proyecto/Producto%20fianl/arduino.PNG)


Archivos .ino <a href="../proyecto/Archivos/Codigoproyectofinal.ino" download="Codigo_Arduino_Desalinizador"> <strong>Codigo Arduino</strong> </a>



<strong>Pasos para el armado aramdo:</strong>

1- Como primer paso luego de tener todos los cortes e impresiones ya echas junto con los materiales que necesitaba, comence armando la caja exterior (Figura 1), esta me permitia ensamblarla y debiado a los encastres con cuñas no tiene problemas de que se vuelva a desmontar.

2- Al tener terminada esta, continue cortando la aislacion para montarla. La aislacion ayuda en el armado y rigidez de las cajas ya que al entrar a presion mantiene las cajas en su lugar sin tener movimientos (Figura 2).

3- Para el armado de la caja interna me ayude con la aisalcion antes colocada ya que los encastres de esta caja son tal que no quedan fijas por si mismas, pero el aisalnte al estar sometiendo una presion hacia adentro hace que estas piezas se mantengan ensambladas y no se destruyan (Figura 3).

4- Luego al estar ya todo fijo y en su lugar continue con la permeabilidad de la caja interna, para ello utilice un nylon plastico de 150 micrones. Los cortes los realice extendiendo el plastico sobre una mesa y dibujando la caja que queria formar. Despues de dibujar y cortar a la medida justa uni las cuatro esquinas para que tome la forma exacta de la caja interna, para ello utilice una maquina de vacio la cual tiene incorporada una selladora de nylon por calor (Figura 4).

5- Como paso siguiente realice los cortes de los tubos que se necesitan para capturar las gotas de agua provenientes de la condensacion, a este tubo le realice dos corte de 50cm de largo y un corte de la mitad de su diametro. En su extremo le coloque un codo y un excedente de 10cm para mejorar el vertido del agua hacia un recipiente de acumulacion (figura 5).

Al mismo tiempo le realice la colocacion de grava en la base de la caja, la cual primero la clasifique y lave muy bien con abundante agua para quitar la suciedad, restos vegetales y de otras impurezas.

6- Al poder ya colocar la caja estanca y dimensionar donde iban a ir instalados los sensores, continue realizando la instalacion de los mismos y la instalacion del Arduino Uno. Este lo instale a un costado, precisamente en el lateral que da al punto cardinal Este ya que es el que recivira los rayos del sol mas tenues (Figura 6).

7- Por ultimo realice la instalacion de los sensores y los motores. El sensor de nivel que esta dentro del desalinizador esta sujeto mediante un soporte realizado en impresion en 3D, la boma de succion que realiza el bombeo del agua para el interior del desalinizador no esta sujeta a ninguna superficie para permitir ser instalada en el resipiente que se recolecte el agua con sal. El motor de evacuacion de agua en el interior del desalinizador esta sujeto al fondo de la mimsa para permitir la evacuacion de la totalidad del agua.
Los sensores de temperatura y nivel de agua del recipiente exterior donde se encuentra el agua producida, estan sujetos al recipiente. 


![](../images/Proyecto/Producto%20fianl/piezas.PNG)
<small>Figura 1</small> 

![](../images/Proyecto/Producto%20fianl/aisalcion.PNG)
<small>Figura 2</small>

![](../images/Proyecto/Producto%20fianl/pasos.PNG)
<small>Figura 3</small>

![](../images/Proyecto/Producto%20fianl/nylon.PNG)
<small>Figura 4</small>

![](../images/Proyecto/Producto%20fianl/caño.PNG)
<Small>Figura 5</small>



Poner el programa de Arduino









¿Quieres construir tu desalinizador solar? Descarga y sigue los siguientes pasos 

 <a href="../Cómo_construir_mi_desalinizador_solar.pdf" download="Desalinizador Solar"> <strong>Descargar</strong> </a>
 
