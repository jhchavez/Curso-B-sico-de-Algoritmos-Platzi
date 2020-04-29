// 1.- Comenzamos a hacer ka comparacion de elementos adyacentes
// 2.- repetimos hasta tener una pasada completa sin ningun swap

#include<stdio.h>

void cambiar_pos(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubbleSort(int vector_entrada[], int n)
{
    int i, j;
    for (i=0; i < n-1; i++)
    {
        for(j=0; j < n-i-1; j++)
        {
            if(vector_entrada[j]>vector_entrada[j+1])
            cambiar_pos(&vector_entrada[j],&vector_entrada[j+1]);
        }
    }
    
}

int print_array(int vector_entrada[], int n)
{
    int i;
    for(i=0; i<n-1; i++)
        printf("%d  ", vector_entrada[i]);
    printf("\n fin del Ordenamiento");
}

main(int argc, char const *argv[])
{
    int vector_entrada[]={100, 1992, 0, -1, 60, 70, 14, 15, 10};
    int n = sizeof(vector_entrada)/sizeof(vector_entrada[0]);
    // int n = sizeof(vector_entrada)/sizeof(int);
    bubbleSort(vector_entrada, n);
    print_array(vector_entrada, n);
    printf("\n");
    return 0;
}
