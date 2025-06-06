/******************************************************************************
Programa: Manipulação de matriz dinâmica de inteiros.
Autor: Lucas Carvalho.
Data: 07/06/2025.
Descrição: Programa que solicita do usuário a quantidade de linhas e colunas,
           cria uma matriz dinâmica, preenche com valores fornecidos e imprime 
           a matriz.
*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int linha, coluna;
    
    cout << "Me informe a quantidade de linhas da matriz:" << endl;
    cin >> linha;
    cout << "Me informe a quantidade de colunas da matriz:" << endl;
    cin >> coluna;
    
    vector<vector<int>> matriz(linha, vector<int>(coluna));
    
    cout << endl;
    
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cout << "elemento [" << i << "] [" << j << "]" << endl;
            cin >> matriz[i][j];
        }
    }
    
    cout << endl;
    
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cout << matriz [i][j] << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}