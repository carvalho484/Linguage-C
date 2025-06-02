/******************************************************************************
Programa : Conversor de idade em dias para anos, meses e dias.
Autor    : Lucas Carvalho.
Data     : 02/06/2025.
Descrição: Este programa solicita ao usuário a idade em dias e converte
           esse valor para o formato de anos, meses e dias. Ele valida
           a entrada e faz o cálculo aproximando:
           - 1 ano = 365 dias
           - 1 mês = 30 dias
*******************************************************************************/
#include <iostream>
using namespace std;

struct c_idade {
    int ano;
    int mes;
    int dia;
};

c_idade contador_idade(int idade){
    c_idade c;
    c.ano = idade / 365;
    idade = idade % 365;
    c.mes = idade / 30;
    idade = idade % 30;
    c.dia = idade;
    return c;
}

int main()
{
    
    int idade;

    cout << "Qual e a sua idade em dias ?" << endl;

    while(true){
        
        cin >> idade;

        if(cin.fail() || idade < 0 || idade > 1000000) {
            
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "ERRO! valor incorreto tente novamente" << endl; 
            
        }else {
            
            cin.ignore(10000, '\n');
            break;
            
        }
    }
    
    c_idade resultado = contador_idade(idade);
    
    cout << endl;
    cout << resultado.ano << " ano(s)" << endl;
    cout << resultado.mes <<  " mes(es)" << endl;
    cout << resultado.dia << " dia(s)" << endl;

  return 0;
}