# Cómo usar este código

## Compilar el programa

```console
foo@bar:~/...$ make all
```
## Correr programa
```console
foo@bar:~/...$ bin/envios
```
____________________________________
## Compilación de tests
```console
foo@bar:~/$ make test
```
## Correr tests
```console
foo@bar:~/$ bin/tests
```


# Libreria de clases de envios

Se requiere construir un conjunto de clases que permitan calcular el costo de diferentes tipos
de envío que va a utilizar una compañía. El objetivo final es que la empresa pueda calcular el
valor de los envíos.


# Tipos de Envío y calculo de costos
El cálculo de costos cuenta con 2 variables en común: 
  
  1. Peso ->Kg 
  
  2. Distancia->Km


Sin embargo el método de cálculo varía según el tipo de envío de la siguiente forma:
## - Servicio Postal

 El servició postal contará con una variable adicional que es la clase de vuelo que entre mayor sea aumentará el precio de envío.El esquema de cálculo de costos es el suguiente:


|  KG | PRIMERA CLASE*KM  |  Segunda clase*KM | Tercera clase*KM  |   |
|---|---|---|---|---|
| 0-3 |0.300   |0.0280   |0.0120   |   |
| 4-8 |0.450   |0.0530   |0.0120   |   |
| +9  |0.600   |0.0750   |0.0120   |   |



## - FedEX

El esquema de cálculo de costos es el suguiente:  
Costo base = 35.00

● Si distancia > 500 km, entonces costo = costo + 15.00

● Si peso > 10kg entonces costo = costo + 10.00



# Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
