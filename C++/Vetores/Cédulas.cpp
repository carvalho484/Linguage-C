/******************************************************************************
Problema: beecrowd 1018 - Cédulas.
Autor: Lucas Carvalho.
Data: 02/06/2025
Descrição: Dado um valor inteiro, o programa calcula o menor número de notas possíveis (cédulas) 
           para compor esse valor. As cédulas disponíveis são: 100, 50, 20, 10, 5, 2 e 1.
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    int i, valor;

    cin >> valor;

    cout << valor << endl;

    for (i = 0; i < 7; i++) {
        cout << valor / notas[i] << " nota(s) de R$ " << notas[i] << ",00" << endl;
        valor %= notas[i];
    }

    return 0;
}
