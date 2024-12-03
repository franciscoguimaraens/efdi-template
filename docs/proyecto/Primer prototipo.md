---
hide:
    - toc
---

# Prototipo

<strong><Mark>Construcción y pruebas del prototipo</Mark></strong> 

Para la realización de este proyecto construí un prototipo que me ayudo a entender el funcionamiento y al mismo tiempo poder mejorarlo.

El prototipo comenzó con un primer diseño a mano en una hoja. En este primer diseño definí las características
principales que debería de tener como sus dimensiones y su inclinación.
La idea al definir sus dimensiones fue que sea algo de poco tamaño pero eficiente para que pueda caber en lugares reducidos.
La inclinacion de la lamina transparente superior es de 13 grados, esto favorece más que nada la captación de radiación provenientes del sol en los periodos de verano de nuestro pais donde el sol toma sus puntos mas altos. Tambien esta inclinacion es de suma importancia para que las gotas de agua condensadas puedan caer hasta el tubo recolector.



![](../images/Proyecto/Ideas%20iniciales/sol.PNG)

<small>Ángulo Solar</small>
![](../images/Proyecto/Ideas%20iniciales/WhatsApp%20Image%202024-11-25%20at%2010.57.24%20AM.jpeg)

<small>Bosquejo inicial</small>

<strong>Construcción del prototipo:</strong>


El prototipo lo construí con materiales que fui reciclado de diversas construcciones.
Como primeros pasos recolecte todos los materiales que iba a necesitar para la construcción.
El acumulador cuenta con una caja de madera, un vidrio, un nylon que recubre la parte interior para evitar las fugas de agua y un ducto que permite capturar las gotas que se deslizan por el vidrio y llevarlas al exterior para poder juntarlas.



<em>Pasos para la creación:</em>


Para la creación del prototipo utilice herramientas manuales. 
Comencé con el corte de la madera para hacer la caja donde estaría acumulada el agua que sería evaporada, realice los corte con una cierra circular eléctrica y lo ensamble con clavos y grampas.
Para la realización de los agujeros de entrada y salida del agua utilice un taladro con una broca.
El vidrio lo sujete a la caja de madera con silicona, lo que me permitió sellarlo para que no se contamine el agua del interior con objetos u agua de lluvia y también para que no hunieran perdidas de vapor por la elevacion de la temperatura.


![](../images/Proyecto/Primer%20prototipo/Cortes%20y%20primer%20armado/foto%20cracion.PNG)

<small>Corte y ensamble</small>

-Prueba 1:

Luego del armado proseguí a revestirlo con un nylon en su interior para que no tubiera fugas de agua. Realizado este paso prosegui a verificar que no existiera ninguna fuga, al ver que estaba bien prosegui con los siguientes pasos para su funcionamiento.
Coloque el vidrio superior junto con el ducto de recoleccion y lo selle hermeticamente a la caja.
Al ponerlo en el sol por varias horas vi que este no lograba condensar más que algunas gotas de agua, esto se debía a que en esas primeras pruebas la radiación solar que estaba llegando era muy baja por que en ese periodo donde estaba ubicado recien estaba culminando el invierno. Otro de los motivos, era que mi prototipo tenía muchas perdidas de calor la cual me impedía el aumento de temperatura en su interior.



-Prueba 2:

Al ver las concluciones antes mencionadas mejore pintando la parte interior de la caja con pintura en aerosol de color oscuro para favorecer la acumulación de energía y asi aumentar la temperatura. También para evitar las pérdidas de calor dadas en el cuerpo transparente ubicado en la parte superior, opte por ponerle un doble vidrio. Esto para que existiera entre ambos vidrios un aislante termico.
En esta reformación también opte por poner una placa reflectiva en su base interior la que en el transcurso de los días me di cuenta que esto empeoraba el rendimiento y no me favorecia en el aumento de temperatura.


![](../images/Proyecto/Primer%20prototipo/Dos%20vidrios/prueba%202.PNG)

<small>Colocación de doble vidrio</small> 




![](../images/Proyecto/Primer%20prototipo/Dos%20vidrios/prueba%20dos%20termicas.PNG) 

<small>Fotos térmicas sin aislación</small>




Al ir realizando todos estos cambios no sabía que mejoras me beneficiaban y cuáles no. Lo cual para ello instale una estación de medida para que me ayude a obtener datos necesarios para las investigaciones y toma de decisiones en futuras mejoras.
La estación de medida consiste de un sensor PAR para la medida de Radiación Solar y tres sensores de medidas de temperaturas (PT1000).
Todos estos datos eran recogidos por un adquisidor de datos (Dattalogger) el cual tomaba datos cada 10 segundos y realizaba el promedio minutal. Con esto podía graficar y ver los datos en tiempo real lo cual me favorecía un montón para ver los avances de las mejoras.
Nota: Cabe mencionar que la inclinación del sensor PAR estaba en la misma inclinación del vidrio y tanto la estación como el colector estaban orientados exactamente al norte solar.


![](../images/Proyecto/Primer%20prototipo/Data%20Logger%20y%20sensores/prueba%203.PNG)

<small>Adquisidor de datos y sensores de temperatura</small>



Datos:

![](../images/Proyecto/Graficas/Primeras_Modificaciones.png)

<small>Gráfica de radiacón y temperaturas</smll>



En la gráfica podemos apreciar 4 días de pruebas. En la gráfica superior podemos observar la radiación solar Global en plano inclinado y en las de abajo las diferentes temperaturas obtenidas para ese día.
La grafica de temperatura en color azul es la temperatura ambiente, la de color naranja es la temperatura entre ambos vidrios y la de color verde es la interior del colector.
Al mirar las gráficas podemos apreciar que para una radiación solar de aproximadamente 1000W/m2 y una temperatura ambiente de 32°C tenemos una diferencia de temperatura con el acumulador de 33°C.
Esto quiere decir que en un dia soleado de Primavera-Verano con una temperatura ambiente de 32°C podemos obtener un aumento de temperatura en el interior de +30°C.


-Prueba 3:

Al examinar las fotos térmicas vistas anterior mente y los resultados que obtube opte por aislar el acumulador termicamente. Utilice espuma plast de 2 cm de espesor y membrana refractante para mitigar las perdidas.

![](../images/Proyecto/Primer%20prototipo/Una%20aislacion/prueba%204.PNG)

<small>Aislación térmica</smll>


![](../images/Proyecto/Primer%20prototipo/Una%20aislacion/prueba%20termica.PNG)

<small>Fotos térmicas con una aislación</small>



![](../images/Proyecto/Graficas/Media_Modificacion.png)

<small>Gráfica de radiacón y temperaturas</small>

En la gráfica podemos observar una mejora en el aumento de las temperaturas en el interior del acumulador.
Podemos analizar que para un dia soleado de Primavera-Verano y una temperatura ambiente de 30°C tenemos una diferencia entre la temperatura interior del desalinizador y la temperatura ambiente de aproximadamente 40°C.
Lo que podemos asumir que hubo una mejoria en cuanto al aumento de temperatura dentro del desalinizador.


-Prueba 4:

Luego de obtener estos datos y junto a las fotos termicas se podía seguir notando que todavía existían perdidas de calor por la aislación anteriormente colocada. Al ver esto decidí colocarle otra capa de aislación para moderar las perdida y mejorar la temperatura interior.
Junto a este cambio realice la extracción de la placa refractante que tenía en su interior y en su lugar coloque grava de color negra. 


![](../images/Proyecto/Primer%20prototipo/Graava/grava.PNG)

<small>Grava</small>


Luego de hacer estas mejoras continue con las pruebas y experimentos para ver las mejoras que esto causaba.



![](../images/Proyecto/Primer%20prototipo/Dos%20aisalcion/doble%20aisalcion%20termica.PNG)


<small>Fotos térmicas con doble aislación</small>


![](../images/Proyecto/Graficas/Ultima_Modificacion.png)

<small>Gráficas de radiación y temperaturas</small>


Al mirar estos datos se pude notar que para dias totalmente soleados de Primavera-Verano con temperaturas que rondan los 30°C podemos obtener un aumento de temperaturas en el interior del desalinizador que llegan a 85°C, lo cual favorece un monton en cuanto a la cantidad de agua destilada obtenida.



<strong><Mark>Pruebas de agua<Mark></strong>

Tambien para validar el proceso y el producto realice pruebas de agua con respecto a la cantidad de sal contenida antes y despues de pasar por este tipo de procesamiento de agua.
Utilice un instrumento el cual me permitia la medicion de varios parametros de los cuales tome la conductividad, salinidad y temperatura del agua.
Estos tres parametros estan relacionados entre si ya que al aumentar la temperatura tambien aumenta la conductividad del agua, lo que tambien ocurre si aumenta o disminuye la salinidad.

![](../images/Proyecto/Primer%20prototipo/Salinizacion/salinizador.PNG)

<small>Instrumento para medir salinidad, conductividad y temperatura<small>


Para realizar las pruebas tome agua provenientes de diferentes lugares, la primera prueba que realice fue sacando agua de la red potable localizada en mi localidad y pasada por un filtro purificador. 
La siguiente prueba fue tomando agua de la misma red, pero sin pasar por este purificador.
Al estar lejos de una fuente de agua de Mar y no tener acceso a ella opte por agregar una cantidad conocida de Sal (NaCl) a un volumen de agua haciendo asi que este fuera lo mas parecido al agua encontrada en el mar (35g de sal por litro de agua). 


![](../images/Proyecto/Primer%20prototipo/Salinizacion/salll.PNG)

<small>Agua salada</small>


![](../images/Proyecto/Tabla%20de%20agua/cambiar.PNG)

<small>Datos obtenidos de las distintas pruebas</small>


Al concluir estas pruebas realice la medicion de cuanta cantidad de agua deslinizada podia llegar a obtener con todas estas mejoras, lo que en definitiva pude obtener fueron hasta 350ml de agua en un dia completo, lo que equivale a un vaso promedio por dia.
Con este proceso y estas caracteristicas se deberia de escalar 6 veces este acumulador, lo que equivale a 1.5m2 para obtener la cantidad de 2lts de agua necesaria para abastecer a una persona en un dia.  




<strong>Anexo:</strong>

![](../images/Proyecto/Tabla%20de%20agua/grafica%20datos.PNG)

<small>Tambla de medidas y materiales utilizados</small>

