# taller-descubre-arduino
Descubre arduino es un taller que permite pasar de "cero" a "he hecho algo con un arduino" en solo 1 hora
En el taller hacemos dos sencillos ejercicios:
1.- Blink
Consiste en conectar un led entre el pin GND y el pin digital 5. No usamos resistencias porque al no declarar el pin como salida nunca llega a salir 5V (es un truco que descubrimos por casualidad en un taller con servos RC).
2.- Dado binario
Conectamos un botón entre GND y el pin digital 8; y luego 3 leds entre GND y los pines digitales 11, 12 y 13.
Cuando pulsas el botón, se genera un número aleatorio en binario y se van encendiendo los tres leds de manera arbitraria (luces de navidad). Al soltarlo, se quedan iluminados los leds del número que ha salido en la tirada del dado; y aprovechamos para explicarles en qué consiste el código binario y cómo codificamos los números.
