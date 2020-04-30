#necesitamos dividir nuestro dataset
#necesitamos un punto pivotal
#recursivamente ordenar cada mitad de mi array

def particion(arr, low, high):
    i =(low-1)
    pivot = arr[high]
    
    for j in range(low, high):
        if arr[j]<= pivot
            i = i+1
            arr[i], arr[j] = arr[j], arr[i]
    
    arr[i+1], arr[high] = arr[high],arr[i+1]
    return (i+1)


def quickSort(arr, low, high)
    if low < high:
        pi = particion(arr, low, high)
        quickSort(arr, low, pi)
        quickSort(arr, pi+1, high)
        
