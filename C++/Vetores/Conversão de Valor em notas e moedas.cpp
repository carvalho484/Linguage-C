/******************************************************************************
Problema: Conversão de Valor em Notas e Moedas.
Autor: Lucas Carvalho.
Data: 02/06/2025.
Descrição: O programa recebe um valor em reais (R$) com duas casas decimais
           e o converte para a menor quantidade possível de notas e moedas,
           considerando as denominações do sistema monetário brasileiro.
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int resultado_notas, qtd;
    int i;
    double resultado_moedas, valor;
    
    int notas[5] {100, 50, 20, 10, 5, 2};
    double moedas[5] {1, 0.50, 0.25, 0.10, 0.05, 0.01};

    cout << "Qual e o valor a ser convertido:" << endl;
    cin >> valor;
    
    cout << fixed << setprecision(2);
    
    int valor_int = static_cast <int> (valor);
    
    cout << endl;
    cout << "NOTAS" << endl;
    
    for(i = 0; i < 6; i++){
        cout << valor_int / notas[i] << " nota(s) de R$" << notas[i] << ".00" << endl;
        
        valor_int = valor_int % notas[i];
    }
    
    double valor_moedas = valor - static_cast <int> (valor);
    valor_moedas += valor_int;
    
    cout << endl;
    cout << "MOEDAS" << endl;
    
    for(i = 0; i < 6; i++){
        qtd = static_cast <int> (valor_moedas / moedas[i]);
        cout << qtd << " moeda(s) de R$" << moedas[i] << endl;
        
        valor_moedas = fmod(valor_moedas, moedas[i]);
        
        if(valor < 0.001){
            valor = 0.0;
        }
    }
    
    return 0;
}
