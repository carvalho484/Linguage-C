/******************************************************************************
Programa: Manipulação de vetor de inteiros.
Autor: Lucas Carvalho.
Data: 05/06/2025.
Descrição: Programa para criar um vetor de inteiros, ler valores do usuário e imprimir.
*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tamanho;
    cout << "Qual e o tamnho do vetor ?" << endl;
    cin >> tamanho;
    
    vector<int> vetor(tamanho);
    
    cout << endl;
    
    for(int i = 0; i < tamanho; i++){
        cout << "Informe o valor do vetor " << i << ":" << endl;
        cin >> vetor[i];
    }
    
    cout << endl;
    
    for(int valor : vetor){
        cout << valor << " ";
    }
    
    return 0;
}

