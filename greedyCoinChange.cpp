// Buscaremos el minimo de monedas posbles para obtener el cambio total N,
// tomando monedas del set monedas coinSet[]
// necesitamos un auxiliar "res" stack recursivo
// crear una funcion recursiva para encontrar el valor
// y retornar "monedas necesarias para el cambio"

#include<iostream>
#include<climits>

using namespace std;

int greedyChange(int coinSet, int n, int N)
{
    if (N==0)
        return 0;
    if (N<0)
        return INT_MAX;

    int coins = INT_MAX;
// recorremos todo nuestro set de monedas
    for(int i = 0; i<n; i++)
    {
        int res = greedyChange(coinSet, n, N- coinSet[i]);
        if(res != INT_MAX)
            coins = min(coins, res+1);
    }
    return coins;
}