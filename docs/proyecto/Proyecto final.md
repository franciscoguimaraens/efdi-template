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


Para el diseño y modelado, utilicé el programa Fusion 360, con el cual realicé todos los diseños que se presentarán a continuación. Este programa me permitió crear modelos en 2D, los cuales luego pude extruir, ensamblar y verificar antes de llevarlos a la realidad. De esta manera, pude asegurarme de que los diseños cumplían con los requisitos establecidos.

<em>Caja interior:</em>

En la imagen se puede ver el primer diseño realizado, que corresponde a la caja interior del desalinizador. Su base y laterales están diseñados para encastrarse entre sí sin la necesidad de usar pegamento ni ningún otro tipo de fijación. Este sistema de encastre permite una construcción más sencilla y eficiente, asegurando la estabilidad de la estructura sin complicaciones adicionales.

![](../images/Proyecto/Producto%20fianl/subir%202.PNG)

<em>Caja exterior:</em>

Aquí se muestra el diseño de la caja exterior, que consta de una base y sus caras laterales. Esta caja está diseñada para que sus piezas encastren perfectamente entre sí, y para garantizar su estructura y rigidez, se le colocan cuñas. Su función principal es soportar todas las fuerzas internas generadas por el agua y los objetos que se encuentran en su interior, proporcionando estabilidad y resistencia al prototipo.

![](../images/Proyecto/Producto%20fianl/subir%201.PNG)

<em>Caja estanca y soporte:</em>

Para proteger el Arduino y sus componentes de la exposición directa a los rayos del sol, diseñé una caja estanca, la cual fue fabricada utilizando una impresora 3D. Esta caja consta de una estructura con una tapa, que está diseñada para fijar una pantalla LCD y tres luces LED, esenciales para mostrar la información de los sensores. Además, se diseñó un soporte específico para mantener uno de los sensores dentro de la caja del desalinizador, asegurando que estuviera bien sujeto, ya que estará en contacto con el agua durante el funcionamiento del prototipo.

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


Para la automatización y programación del proceso, así como para la integración de los sensores, utilicé un Arduino Uno. El sistema consta de varios componentes clave:

<em>Sensor de nivel de agua (bolla):</em> Este sensor está ubicado dentro de la caja interior del desalinizador. Utiliza una boya para enviar señales sobre la altura del agua. Cuando el nivel es bajo, el Arduino activa la bomba ubicada en el depósito de agua exterior, aumentando el nivel en el interior de la caja. Cuando el agua alcanza el nivel óptimo, el Arduino apaga la bomba para evitar un exceso de agua.

<em>Sensor de temperatura:</em> Este sensor mide la temperatura del agua en el depósito del agua producida. Dado que el agua salida del desalinizador puede estar a una temperatura muy alta, es importante monitorearla, ya que puede ser peligrosa para el consumo. El valor de la temperatura se muestra en la pantalla LCD ubicada en la caja estanca, junto con la distancia en centímetros que falta para llenar el recipiente.

<em>Luces LED (roja, amarilla, azul):</em> Tres luces LED indican visualmente la cantidad de agua producida:

Rojo: indica que la cantidad de agua es baja.
Amarillo: señala que la cantidad de agua es media.
Azul: muestra que hay una buena cantidad de agua producida, lista para el consumo.
Bomba de agua para limpieza: Dentro de la caja interna del desalinizador, hay una bomba que permite extraer el agua del sistema para realizar una limpieza. Esta bomba es activada por un pulsador manual ubicado fuera de la caja estanca.

<em>Resistencias:</em> Tanto el sensor de temperatura como las luces LED están conectados en el circuito con resistencias para regular el flujo de corriente. El sensor de temperatura tiene una resistencia de 1000 ohm, mientras que cada luz LED tiene una resistencia de 220 ohm en su pin positivo, ambas conectadas en serie para garantizar un funcionamiento adecuado.

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

1- Como primer paso, después de tener todos los cortes e impresiones realizados junto con los materiales necesarios, comencé ensamblando la caja exterior (Figura 1). Este diseño me permitió ensamblar las piezas fácilmente y, gracias a los encastres con cuñas, no tuve problemas para evitar que la caja se desarmara.

![](../images/Proyecto/Producto%20fianl/1.PNG)                               
<small>Figura 1</small> 

2- Una vez que tuve terminada la caja exterior, continué cortando la aislación para montarla. La aislación desempeña un papel clave en el armado y rigidez de las cajas, ya que al entrar a presión, mantiene las piezas en su lugar, evitando cualquier movimiento o desajuste (Figura 2).

![](../images/Proyecto/Producto%20fianl/2.PNG)                            
<small>Figura 2</small>


3- Para el armado de la caja interna, utilicé la aislación previamente colocada, ya que los encastres de esta caja no son lo suficientemente firmes por sí mismos. Sin embargo, al aplicar presión hacia adentro con la aislación, las piezas se mantienen ensambladas y no se desajustan ni se desencastran (Figura 3).

![](../images/Proyecto/Producto%20fianl/3.PNG)     
![](../images/Proyecto/Producto%20fianl/33.PNG)                           
<small>Figura 3</small>


4- Una vez que todo estaba fijo y en su lugar, continué con el proceso de hacer la caja interna impermeable. Para ello, utilicé un nylon plástico de 150 micrones. Primero, extendí el plástico sobre una mesa y tracé el contorno de la caja que quería formar. Después de realizar los cortes a la medida exacta, uní las cuatro esquinas para darle la forma precisa de la caja interna. Para sellar las esquinas, utilicé una máquina de vacío que incluye una selladora por calor, lo que permitió asegurar una unión hermética (Figura 4).

![](../images/Proyecto/Producto%20fianl/nylon.PNG)                             
<small>Figura 4</small>

5- Como siguiente paso, realicé los cortes necesarios en los tubos para capturar las gotas de agua provenientes de la condensación. Corté dos tubos de 50 cm de largo y un corte a la mitad de su diámetro. En el extremo de cada tubo, coloqué un codo y añadí un excedente de 10 cm para mejorar el vertido del agua hacia un recipiente de acumulación (Figura 5).

Simultáneamente, me encargué de colocar la grava en la base de la caja. Primero, clasifiqué y lavé bien la grava con abundante agua para eliminar la suciedad, restos vegetales y otras impurezas, asegurando que estuviera lista para su uso en el sistema.

![](../images/Proyecto/Producto%20fianl/5.PNG)                                     
<Small>Figura 5</small>

6- Una vez que pude colocar la caja estanca y dimensionar los lugares donde iban a ir instalados los sensores, continué con la instalación del Arduino Uno. Lo instalé en un costado, específicamente en el lateral que da hacia el punto cardinal Este, ya que es el área que recibirá los rayos de sol más suaves y tenues durante el día (Figura 6). Esto permitió protegerlo de la exposición directa al sol, a la vez que aseguraba su funcionalidad dentro del sistema.

![](../images/Proyecto/Producto%20fianl/estancaaa.PNG)                                                                  
<small>Figura 6</small>

7- Por último, realicé la instalación de los sensores y los motores. El sensor de nivel, ubicado dentro del desalinizador, está sujeto mediante un soporte impreso en 3D. La bomba de succión, que bombea el agua hacia el interior del desalinizador, no está fijada a ninguna superficie, lo que permite que se instale directamente en el recipiente que recolecta el agua sin tratar. El motor de evacuación de agua, ubicado dentro del desalinizador, está fijado al fondo de la caja para garantizar la evacuación completa del agua.

Los sensores de temperatura y de nivel de agua, que miden el agua en el recipiente exterior donde se acumula el agua producida, están sujetos de manera firme al mismo recipiente (Figura 7).

![](../images/Proyecto/Producto%20fianl/6.PNG)                              
<small>Figura 7</small>

8- Después de haber realizado todas las pruebas necesarias, procedí con la colocación de los vidrios superiores, que son los encargados de condensar el vapor y generar las gotas de agua. Estos vidrios juegan un papel clave en el proceso de captación de agua, permitiendo la máxima eficiencia en la condensación.


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

Este tipo de desalinizador debería escalarse unas seis veces en tamaño para alcanzar la producción necesaria para satisfacer las necesidades diarias de una persona promedio. La ventaja de esta tecnología es que es fácil de construir y tiene un costo muy bajo, ya que se puede fabricar utilizando materiales reciclados y herramientas básicas.

El proceso de purificación y potabilización del agua es altamente efectivo y no produce contaminantes en ninguna de sus etapas, ya que se basa en un proceso similar al ciclo natural del agua en nuestro planeta. Esto lo convierte en una opción sostenible y respetuosa con el medio ambiente.

![](../images/Proyecto/Producto%20fianl/desalinizador%20terminado.PNG)


¿Quieres construir tu desalinizador solar? <a href="../Cómo construir mi desalinizador solar final vertical acomodado.pdf" download="Desalinizador Solar"> <strong>Descarga</strong> </a> y sigue los siguientes pasos 

<strong>Materiales:</strong>

A continuación se describen en una tabla todos los materiales utilizados para la construcción

![](../images/Proyecto/Producto%20fianl/Tabla%20mejorada.PNG)

<strong>Presentación final:</strong>

<iframe width="560" height="315" src="https://www.youtube.com/embed/6zU0oFUnbQU?si=eJEwkstHZmcDL-Y6" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>





 

 



