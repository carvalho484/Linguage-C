/******************************************************************************
Programa: Calcula a área de um círculo usando ponteiros.
Autor: Lucas Carvalho.
Data: 31/05/2025.
Descrição:Este programa lê o valor do raio fornecido pelo usuário,
          calcula a área do círculo usando uma função que utiliza ponteiros,
          e exibe o resultado na tela.
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.1415;

void area(double raio, double *area){
    *area = pi * pow(raio, 2);
}

int main()
{
    double resultado, raio; 
    cout << "Qual é o valor do raio ?\n";
    cin >> raio;
    
    area(raio, &resultado);
    
    cout << "O valor da area do circulo é:\n" << resultado;
    
    return 0;
}