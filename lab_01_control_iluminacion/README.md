# Laboratorio del Control de Iluminación de un Sistema Realimentado

## Objetivo General

En este laboratorio se desarrollará el modelo experimental y el control de un sistema de iluminación.

> Los archivos para la practica pueden ser encontrados en [github](https://github.com/davinsony/control-mecatronico/tree/master/lab_01_control_iluminacion)

### Tareas

Para cumplir el objetivo del laboratorio se necesita realizar las siguientes tareas.

1. Subir el código **Arduino** `_control_iluminacion` a la maqueta.
2. Tomar los datos con ayuda del archivo `_simulink_lazo_abierto`. 
3. Realizar un acondicionamiento de los datos tomados.
4. Identificar la función de transferencia del sistema, utilizando la applicación de **Matlab** llamada _System Identification_.
5. Encontrar los valores optimos para el controlador, utilizando la applicación de **Matlab** llamada _PID Tuner_.
6. Verificar el correcto funcionamiento del control con ayuda del archivo `_simulink_lazo_cerrado`.

## Descripción de la planta

La planta es un sistema de iluminación con un LED de potencia (actuador) y un LDR (_Light Dependent Resistor_, sensor). Este sistema es controlado a traves de un **Arduino**. A continuación se presenta una imagen del sistema:

![maqueta](lab_01_img_planta.jpeg "Maqueta de laboratio para el control de iluminación.")

## Ejecución

Para desarrollar este laboratorio seguiremos cada una de las tareas de forma secuencial.

### 1. Subir el código **Arduino**

*[IDE]: Integrated Development Environment

Abramos el archivo `_control_iluminacion` en el **Arduino IDE**
Empecemos subiendo el código **Arduino** a la maqueta. Para esto usaremos el .

El programa que debemos abrir es el 

Este código basicamente lee la información del sensor y la envia por puerto serial al computador, esta información esta codificada en código `ASCII`. Adicionalmente si uno envia un valor (`0-255`) por el puerto serial al **Arduino**, este cambiará la intensidad del LED proporcionalmente a este valor.  

> Una vez subido el código al **Arduino** se puede verificar via el Monitor Serie la recepción de caracteres `ASCII`, enviando cualquier caracter, el caracter recibido debería cambiar.

### 2. Toma de datos

Para la toma de datos usaremos el archivo `_simulink_lazo_abierto`. Este archivo debe ser configurado con el puerto de comunicación `COM_` en el cual aparece el **Arduino** conectado al computador. 

Para verificar el puerto de comunicación serial, usaremos el **Arduino IDE**. En el menú `Herramientas` `>` ``Puerto`

![puerto](lab_01_img_verificacion_puerto.png "Verificación del puerto utilizando el Arduino IDE")