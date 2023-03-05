# Práctica 2
Integrantes:  
Abarca Antonio Mariana            2213064265  
Mejía Escutia Mónica Betsabe      2213026176  
Ibañez Aguilar Jonathan Alejandro 2213026738  
Posadas Gudiño José Alberto       2213026541  

#### Funcionamiento del proyecto
Mediante el programa "BusquedaBinaria.c", el cúal procesa un arreglo, se generó un archivo con extensión .s que fue modificado para que pudiera leer argumentos mediante la entrada estándar e imprimiera el resultado en la terminal.  

#### Compilación
Para compilar el archivo "BusquedaBinaria.s" se debe: 
1. Crear el objeto  
`arm-as BusquedaBinaria.s -o BusquedaBinaria.o`  
2. Crear el archivo .elf  
`arm-gcc BusquedaBinaria.o -o BusquedaBinaria.elf -static`  
3. Ejecutar el archivo  
`./BusquedaBinaria.elf`  


#### Marcos de las funciones  
1. Main    
Para el marco de main se reservan 32 bytes. Tenemos los 8 bytes de la dirección del registro de enlace y el aputador del marco, en este caso no es necesario reservar espacio para los parametros de la función y al tener 6 variables locales ocupamos un espacio de 24 bytes. En la imagen se muestran el nombre de las variables y como se acomodan de 4 en 4 bytes.  

![main](https://user-images.githubusercontent.com/122710250/222928337-003513c3-2a9b-4a89-9ba4-443730eb51ac.png)  
  
2. Función input  
En este caso no necesitamos el lr, sin embargo se deja el espacio de reserva sin poner ninguno valor en su bloque. La función imput tiene dos variables locales y no ocupamos parámetros por lo tanto la reserva que se hace en la memoria es de 16 bytes.  

![input](https://user-images.githubusercontent.com/122710250/222929236-b304b6f0-130b-407e-85c2-6f6e61fade52.png)
  
3. Función atoi   
En esta función se hace una reserva de memoria de 32 bytes aunque sólo ocupamos 28. Los dos bloques de hasta abajo están destinados a r7 y lr, en este caso no hay lr ya que la función atoi es una función hoja. Tenemos 4 variables locales que ocupan 16 bytes y sólo tenemos un parámetro representado con r0.  
  
![Captura desde 2023-03-04 19-11-47](https://user-images.githubusercontent.com/122710250/222936212-f95c173d-13a0-49eb-8ae9-008fa7a3e731.png)

  
4. Función int to string   
Para esta función reservamos un espacio de 32 bytes, tenemos el espacio de 8 bytes para r7 y para lr aunque en este caso no se necesita. Tenemos 3 variables locales pero reservamos espacio de 16 bytes y por último tenemos a r0 como parámetro por lo que reservamos 8 bytes.  
  
![Intstring](https://user-images.githubusercontent.com/122710250/222930821-5c1d9648-3816-413e-bb3a-19ffd95c7507.png)
  
5. Función Imprimir  
Primero reservamos el espacio de 8 bytes aunque sólo ocupamos para el apuntador del marco (r7), no tenemos variables locales y tenemos un sólo parámetro pero reservamos espacio de 8 bytes, por lo que al final el marco queda de 16 bytes.  
  
![Captura desde 2023-03-04 16-32-49](https://user-images.githubusercontent.com/122710250/222931529-07b522eb-3e55-43f7-8cd2-9bbdc942369f.png)




