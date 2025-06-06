/******************************************************************************
rograma: Impressão de valores em vetor dinâmico.
Autor: Lucas Carvalho.
Data: 05/06/2025.
Descrição: Programa que cria um vetor dinâmico de inteiros, adiciona valores e 
imprime cada valor em uma linha.
*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i;
    
    vector<int> vetor;
    vetor.push_back(5);
    vetor.push_back(10);
    vetor.push_back(15);
    vetor.push_back(20);
    
    for(int valor: vetor){
        cout << valor << " " << endl;
    }
}
