#Construcción del modelo experimental de la planta

La planta es un sistema de iluminación con un LED de potencia y un LDR (_Light Dependent Resistor_). Este sistema es controlado a traves de un **Arduino**.

El código **Arduino** que se presenta a continuación, genera una señal tipo escalón al LED de potencia. El LED se enciende (`255`) despues de un tiempo definido en el código `STEPTIME`. 


```c
#define OUT 5
#define IN A0
#define STEPTIME 5000
byte outval = 0;

void setup() {
  pinMode(OUT, OUTPUT);
  analogWrite(OUT, 0);
  Serial.begin(115200);
}

void loop() {
  if (millis() > STEPTIME) outval = 255; else outval = 0;
  analogWrite(OUT, outval);
  Serial.println((String) millis() + ',' + outval + ',' + analogRead(IN));
}
```

Este código debe ser subido al **Arduino**, la última linea envia por el puerto de comunicación serial los valores del tiempo, entrada y salida del sistema. Estos tres valores seran utilizados para realizar la identificación del modelo.

