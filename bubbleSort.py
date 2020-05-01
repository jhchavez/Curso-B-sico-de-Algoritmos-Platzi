#1. Comenzar a hacer comparaciones de elementos adyacentes
#2. Repetir hasta tener una pasada completa sin ningun swap

def bubbleSort(array):
    n = len(array) #cuantos numeros hay en el array
    
    for i in range(n): #recorrer los elementos del array
        print(array) #para ver el bucle del codigo
        for j in range(0, n-i-1): #comparar elementos adyacentes siempre la primera posicion es 0
            if array[j] > array[j+1]:
                array[j], array[j+1] = array[j+1], array[j]
                
                
array = [190, 1200, 1, 2, 4, 55, 1000, 6, 800]
bubbleSort(array)

print("El arreglo ordenado de forma ascendente es:")
for i in range(len(array)): #imprimir como va el arreglo en tiempo real
    print("%d"%array[i]),
    