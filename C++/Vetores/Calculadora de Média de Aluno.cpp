/******************************************************************************
Programa: Calculadora de Média de Aluno
Autor: Lucas Oliveira
Data: 29/07/2025
escrição: 
    Este programa solicita o nome do aluno e 
    três notas válidas (entre 0 e 10), calcula 
    a média e informa se o aluno foi:
      - Aprovado (média >= 7)
      - Reprovado (média < 5)
      - Recuperação (entre 5 e 7)
*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nome, status;
    double nota[3], soma = 0;
    
    cout << "Qual é o seu nome ?" << endl;
    getline(cin, nome);
    
    for(int i = 0; i < 3; i++){
        do{
            cout << "Me informe o valores da nota:" << endl;
            cin >> nota[i];
        
            if(nota[i] < 0 || nota[i] > 10){
                cout << "Valor incorreto!!, tente novamente. " << endl;
            }
        
        }while (nota[i] < 0 || nota[i] > 10);
        
        soma = soma + nota[i];
    }
    
    double media_total = soma / 3;
    
    if(media_total >= 7){
        status = "Aprovado!!";
        
    }else if(media_total < 5 ){
        status = "Reprovado";
        ;
        
    }else{
        status = "Recuperação";
    }
    
    cout << endl;
    cout << nome << endl;
    cout << "Valores das suas notas:" << endl;
    for(int i = 0; i < 3; i++){
        cout << nota[i] << ' ';
    }
    cout << endl;
    cout << "Sua nota media é: " << media_total << endl;
    cout << "Você esta " << status;
    
    return 0;
}
