# Laboratorio del Control de Iluminación de un Sistema Realimentado

## Objetivo General

En este laboratorio se desarrollará el modelo experimental y el control de un sistema de iluminación.

### Tareas

Para cumplir el objetivo del laboratorio se necesita realizar las siguientes tareas.

1. Subir el código **Arduino** a la maqueta.
2. Tomar los datos con ayuda del archivo `_simulink_lazo_abierto`. 
3. Realizar un acondicionamiento de los datos tomados.
4. Identificar la función de transferencia del sistema, utilizando la applicación de **Matlab** llamada _System Identification_.
5. Encontrar los valores optimos para el controlador, utilizando la applicación de **Matlab** llamada _PID Tuner_.
6. Verificar el correcto funcionamiento del control con ayuda del archivo `_simulink_lazo_cerrado`.

## Descripción de la planta

La planta es un sistema de iluminación con un LED de potencia (actuador) y un LDR (_Light Dependent Resistor_, sensor). Este sistema es controlado a traves de un **Arduino**. A continuación se presenta una imagen del sistema:

![maqueta](lab_01_planta.jpeg "Maqueta de laboratio para el control de iluminación.")

