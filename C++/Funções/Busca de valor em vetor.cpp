/******************************************************************************
Programa: Busca de valor em vetor
Autor: Lucas Oliveira
Data: 04/08/2025
Descrição:
   Este programa armazena 10 números inteiros em um vetor
   e permite ao usuário buscar um número entre eles.
   Se o número for encontrado, exibe sua posição (1 a 10).
   Caso contrário, informa que não foi encontrado.
*******************************************************************************/
#include <iostream>
#include <string>
#define TAM 10

using namespace std;

int BuscaValores (int numeros[TAM], int ValorEscolhido){
    for(int i = 0; i < TAM; i++){
        if(numeros[i] == ValorEscolhido){
            return i;
        }
    }
    
    return -1;
}

int main()
{
    int numeros[TAM] = {10,50,60,20,70,88,66,33,40,77};
    int ValorEscolhido;
    int pocisao;
    
    for(int i = 0; i < TAM; i++){
        cout << numeros[i];
        
        if(i < TAM-1){
            cout << " - ";
        }
    }
    
    cout << endl;
    
    cout << "Escolha um valor entre os numeros acima" << endl;
    cin >> ValorEscolhido;
    
    pocisao = BuscaValores(numeros, ValorEscolhido); 
    
    if(pocisao != -1){
        cout << "Valor encontrado na pocisão " << (pocisao + 1);
    }else{
        cout << "Valor não encontrado";
    }
    return 0;
}    