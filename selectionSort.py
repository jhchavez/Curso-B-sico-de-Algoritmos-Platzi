#1. Buscar el numero menor en mi array
#2. Crear dos sub array para llevar el control de mi algoritmo
#3. Imprimir el resultado del Ordenamiento
import sys
array = [20, 5, 21, 6, 23, 7, 34, 999, 68]
def selectionSort(array):
    #recorrer todo el array
    for i in range(len(array)):
        print(array)
        #encontrar el valor minimo restante dentro de nuestro array desordenado
        idxDes = i
        for j in range(i+1, len(array)):
            if array[idxDes] > array[j]:
                idxDes = j
                
        #ya que encontramos el minimo lo vamos a cambiar 
        #por el primer valor de nuestro array desordenado
        array[i], array[idxDes] = array[idxDes], array[i]
        
#ejecutar la funcion

selectionSort(array)
print("Array Ordenado:")
for i in range(len(array)):
    print("%d" %array[i]),