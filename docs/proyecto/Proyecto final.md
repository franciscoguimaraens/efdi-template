---
hide:
    - toc
---

# Proyecto Final

Después de realizar las pruebas e investigaciones necesarias y obtener un resultado satisfactorio, en el cual el prototipo cumple con las expectativas, especialmente en cuanto a la capacidad de generar agua apta para el consumo humano, continué trabajando en un prototipo final. Las características y medidas de este prototipo son idénticas a las del anterior, pero incluye mecanismos electrónicos y automatización. Además, este fue diseñado y fabricado utilizando máquinas de precisión, como cortadoras láser e impresoras 3D, lo que permitió un ensamblaje más preciso y eficiente.

<strong>Construcción:</strong>

El prototipo final está compuesto por dos cajas de madera de MDF de 3 mm, con un espacio de 4 cm de aislante térmico (espuma plast) entre las cajas interna y externa, tanto en los laterales como en la base. La parte superior está formada por dos vidrios, que permiten el paso de la radiación solar y al mismo tiempo proporcionan aislamiento térmico con el exterior.

La caja interna está pintada de negro en su interior y recubierta con nylon plástico para evitar las fugas de agua. En su interior, contiene 2 cm de grava negra, que contribuye a la conservación de la energía. Además, el prototipo incluye una caja estanca que alberga un Arduino Uno, encargado de la automatización y control del desalinizador.

<strong>Modelado 2D y 3D:</strong>

Para el diseño y modelado utilice el programa fuison 360, con este realice todos los diseños que se mostraran a continuación.
Me permitió realizar construcciones en 2D para luego extruirlas, ensamblarlas y verificar antes de traerlos a la realidad y así ver si cumplían con lo requerido.

<em>Caja interior:</em>

En la imagen se puede apreciar el primer diseño realizado. Este es el diseño de la caja interior del desalinizador, su base y sus laterales están diseñadas para ser encastradas unas con otras sin necesidad de utilizar ningún pegamento ni otro objeto.

![](../images/Proyecto/Producto%20fianl/subir%202.PNG)

<em>Caja exterior:</em>

Acá podemos ver el diseño de la caja exterior, la cual está constituida por una base y sus caras laterales. La caja está diseñada de tal forma que encastre una pieza con otra, para mantener su estructura y rigidez se le coloca cuñas.
Esta caja es la encargada de soportar todas las fuerzas internas, provocadas por el agua y los objetos que están dentro.

![](../images/Proyecto/Producto%20fianl/subir%201.PNG)

<em>Caja estanca y soporte:</em>

Para mantener el Arduino y sus componentes juntos fuera del alcance de los rayos del sol, diseñe una caja estanca, la cual para su construcción utilice una impresora 3D.
Esta está constituida por una caja y una tapa, la cual esta última está diseñada para fijar una pantalla LCD y 3 luces LED, necesarias para mostrar información de los sensores.
El soporte fue diseñado para sostener uno de los sensores dentro de la caja del desalinizador, el cual debía de estar bien sujeto ya que estará en contacto con el agua.  

![](../images/Proyecto/Producto%20fianl/caja%20estanca%20dsieño.PNG)
![](../images/Proyecto/Producto%20fianl/soportes.PNG)

<strong>Cortes e impresión en 3D</strong>

Para los cortes de las cajas utilice una cortadora laser la cual me permitió realizar cortes precisos, también realice un grabado con el nombre de "Desalinizador solar" y dos logos en la cara frontal de la caja exterior. Como parámetros para los cortes Utilice una potencia de 75% y una velocidad de 15mm/s, el grabado lo realice con una potencia de 10% y una velocidad de 300mm/s.
La impresión la realice con una impresora RAISED Pro3 Plus con filamento blanco.

![](../images/Proyecto/Producto%20fianl/cortes.PNG)

![](../images/Proyecto/Producto%20fianl/piezas.PNG)

![](../images/Proyecto/Producto%20fianl/caja.PNG)

Archivos .dxf <a href="../Archivos/Exterior.zip" download="Caja Exterior"> <strong>Caja exterior</strong> </a>

Archivos .dxf <a href="../Archivos/Interior.zip" download="Caja Interior"> <strong>Caja interior</strong> </a>

Archivos .stl <a href="../Archivos/Caja_estanca.zip" download="Caja_estanca"> <strong>Caja estanca</strong> </a>

Archivos .stl <a href="../Archivos/Soporte.stl" download="Soporte"> <strong>Soporte sensor</strong> </a>

<strong>Electrónica y Programación</strong>

Para la automatización y programación del proceso y los sensores utilice Arduino Uno.
Utilice un sensor de nivel de agua (bolla), dos bombas de agua, un sensor de temperatura, un sensor de ultrasonido y un pulsador.
El sensor de nivel de agua está ubicado dentro de la caja interior del desalinizador, el cual mediante una boya envía una señal de la altura del agua dentro. Cuando envía una señal de bajo nivel al Arduino, enciende la bomba que está ubicada en el depósito de agua exterior, para así aumentar el nivel de agua en el interior de la caja del desalinizador y que siempre se mantenga con una cantidad de agua apropiada. Cuando el sensor le indica al Arduino que el agua llego a su altura optima, este apaga la bomba para que no siga ingresando.
El sensor de temperatura, nos indica a la temperatura que se encuentra el agua en el depósito del agua producida, ya que este al salir del desalinizador se encuentra a una temperatura muy elevada y puede ser peligrosa al intentar ingerirla. Este Resultado lo podemos ver impreso en la pantalla LCD, ubicado en la caja estanca junto con la distancia en centímetros del faltante para llenar nuestro recipiente. Aparte de esto hay 3 luces LED (Roja, Amarilla y Azul) que nos indica de manera visual la cantidad de agua que tenemos producida, donde el color rojo nos indica una cantidad de agua baja, en amarillo cuando la cantidad de agua es media y en azul cuando tenemos una buena cantidad de agua producida lista para ser consumida.
Dentro de la caja interna del desalinizador, está instalada una bomba de agua que tiene como función sacar el agua del desalinizador para realizar una limpieza cuando se desee. Esta bomba es accionada por un pulsador manual que se encuentra fuera de la caja estanca.
El sensor de temperatura y las luces LED, están instaladas en el circuito cada una con una resistencia, donde el sensor de temperatura tiene una resistencia de 1000 ohm y las luces LED tienen en su pin positivo una resistencia de 220 ohm, cada una conectadas en serie. 

![](../images/Proyecto/Producto%20fianl/arduinooo.PNG)

![](../images/Proyecto/Producto%20fianl/subir.PNG)
<small>Diagrama unifilar del circuito</small>

<em>Sensores y actuadores utilizados:</em>

Bomba de agua sumergible 3v-5v

Sensor de temperatura DS18B20

Sensor de nivel ZP4510

Sensor Ultrasónico Hc-sr04

Pantalla LCD 1602

Archivo .ino <a href="../Archivos/Codigoproyectofinal.ino" download="Codigo_Arduino_Desalinizador"> <strong>Codigo Arduino</strong> </a>

<strong>Pasos del armado:</strong>

1- Como primer paso luego de tener todos los cortes e impresiones ya echas junto con los materiales que necesitaba, comencé armando la caja exterior (Figura 1), esta me permitía ensamblarla, y debido a los encastres con cuñas no tenía problemas de que se vuelva a desmontar.

![](../images/Proyecto/Producto%20fianl/1.PNG)                               
<small>Figura 1</small> 

2- Al tener terminada esta, continue cortando la aislación para montarla. La aislación ayuda en el armado y rigidez de las cajas ya que al entrar a presión mantiene las cajas en su lugar sin tener movimientos. (Figura 2).

![](../images/Proyecto/Producto%20fianl/2.PNG)                            
<small>Figura 2</small>


3- Para el armado de la caja interna me ayude con la aislación antes colocada ya que los encastres de esta caja son tal que no quedan fijas por sí mismas, pero el aislante al estar sometiendo una presión hacia adentro hace que estas piezas se mantengan ensambladas y no se des encastre. (Figura 3).

![](../images/Proyecto/Producto%20fianl/3.PNG)     
![](../images/Proyecto/Producto%20fianl/33.PNG)                           
<small>Figura 3</small>


4- Luego al estar ya todo fijo y en su lugar, continue con la permeabilidad de la caja interna, para ello utilice un nylon plástico de 150 micrones. Los cortes los realice extendiendo el plástico sobre una mesa y dibujando la caja que quería formar. Después de dibujar y cortar a la medida justa, uní las cuatro esquinas para que tome la forma exacta de la caja interna, para ello utilice una máquina de vacío la cual tiene incorporada una selladora por calor. (Figura 4).

![](../images/Proyecto/Producto%20fianl/nylon.PNG)                             
<small>Figura 4</small>

5- Como paso siguiente realice los cortes de los tubos que se necesitan para capturar las gotas de agua provenientes de la condensación, a este tubo le realice dos cortes de 50cm de largo y un corte de la mitad de su diámetro. En su extremo le coloque un codo y un excedente de 10cm para mejorar el vertido del agua hacia un recipiente de acumulación. (figura 5).

Al mismo tiempo le realice la colocación de grava en la base de la caja, la cual primero la clasifique y lave muy bien con abundante agua para quitar la suciedad, restos vegetales y otras impurezas.


![](../images/Proyecto/Producto%20fianl/5.PNG)                                     
<Small>Figura 5</small>

6- Al poder ya colocar la caja estanca y dimensionar donde iban a ir instalados los sensores, continue realizando la instalación del Arduino Uno. Este lo instale a un costado, precisamente en el lateral que da al punto cardinal Este, ya que es el que recibirá los rayos de sol más tenues. (Figura 6).

![](../images/Proyecto/Producto%20fianl/estancaaa.PNG)                                                                  
<small>Figura 6</small>

7- Por último, realice la instalación de los sensores y los motores. El sensor de nivel que está dentro del desalinizador está sujeto mediante un soporte realizado en impresión en 3D, la bomba de succión que realiza el bombeo del agua para el interior del desalinizador no está sujeta a ninguna superficie, esto para permitir ser instalada en el recipiente que se recolecte el agua sin tratar. El motor de evacuación de agua en el interior del desalinizador, está sujeto al fondo de la misma para permitir la evacuación de la totalidad del agua.
Los sensores de temperatura y de nivel de agua del recipiente exterior donde se encuentra el agua producida, están sujetos al mismo recipiente. (Figura 7)

![](../images/Proyecto/Producto%20fianl/6.PNG)                              
<small>Figura 7</small>

8- Luego de haber hecho todas las pruebas realice la colocación de los vidrios superiores, que son los encargados de condensar y producir las gotas de agua.



<strong>Pruebas de la electrónica y programación:</strong>

Al finalizar el armado de la estructura e instalación de los sensores y bombas, realice una prueba de funcionamiento de los mismos donde se puede ver a continuación:

<iframe width="560" height="315" src="https://www.youtube.com/embed/0Q7bQzj2HQQ?si=ceeeP51VTp-qrKKI" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

Acá se puede ver todos los sensores, bombas y actuadores en funcionamiento.


<iframe width="560" height="315" src="https://www.youtube.com/embed/Va2UhfEKFEo?si=OEqA5u3-34agbX12" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>


<iframe width="560" height="315" src="https://www.youtube.com/embed/qpV1dIpEi4E?si=oXOIm3BFJl1JWp0n" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>
<small>Breve explicación del funcionamiento</strong>

En el siguiente video se puede ver que al aumentar la cantidad de agua las luces LED nos indican según el color la cantidad de agua disponible producida. También podemos notar en la pantalla, la temperatura del agua que se encuentra en el recipiente y la distancia disponible que tenemos para seguir produciendo.

![](../images/Proyecto/Producto%20fianl/led.PNG)

<small>LED roja nivel de agua producida baja, LED naranja nivel de agua producida media, LED azul buena disponibilidad de agua producida.</small>

Nota: Los videos son de manera explicativa de cómo funciona la electrónica y sus componentes, ya que me sería imposible mostrarlos en tiempo real porque el proceso completo demora un día. 

<strong>Pruebas reales:</strong>

<iframe width="560" height="315" src="https://www.youtube.com/embed/D_u-JHXvBSo?si=tie7hkf1rJdttZsk" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/XvksK_BSsjk?si=Ml36NdPwTFpBR7k_" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/Mdy_zclQtdo?si=vgZGjt5eulFFr1v5" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>


<strong>Conclusión:</strong>

Con este tipo de desalinizador se debería de escalar 6 veces el tamaño para alcanzar la producción necesaria para mantener a una persona promedio en un día. Este tipo de tecnología es de fácil construcción y con costos económicos muy bajos, ya que se lo puede construir reciclando materiales y con herramientas muy básicas. 
El proceso por el que pasa el agua para purificarse y potabilizarse es efectivo y no produce contaminantes en ningunos de sus procesos, ya que este es similar al proceso que se da de forma natural en nuestro planeta. 

![](../images/Proyecto/Producto%20fianl/desalinizador%20terminado.PNG)


¿Quieres construir tu desalinizador solar? <a href="../Cómo construir mi desalinizador solar final vertical acomodado.pdf" download="Desalinizador Solar"> <strong>Descarga</strong> </a> y sigue los siguientes pasos 

<strong>Materiales:</strong>

A continuación se describen en una tabla todos los materiales utilizados para la construcción

![](../images/Proyecto/Producto%20fianl/Tabla%20mejorada.PNG)

<strong>Presentación final:</strong>

<iframe width="560" height="315" src="https://www.youtube.com/embed/6zU0oFUnbQU?si=eJEwkstHZmcDL-Y6" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>





 

 



