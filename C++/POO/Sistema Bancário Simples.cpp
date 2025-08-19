/******************************************************************************
Nome do programa: Sistema Bancário Simples
Autor: Lucas Carvalho
Data: 18/08/2025
Descrição: 
     Este programa simula uma conta bancária simples.
     Permite ao usuário:
       - Depositar valores
       - Sacar valores
       - Visualizar histórico de transações
       - Consultar saldo
*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

void limpatela(){
    #ifdef _WIN32
        system("CLS");
    #else
        system("clear");
    #endif
}

struct Registro{
  string tipo;
  double valor;
  double saldo;
};

class conta_bancaria{
  private:
    double saldo;
    vector<Registro>historico;
    
    public:
      
      conta_bancaria(double saldonaconta = 0){
        if(saldonaconta >= 0){
          saldo = saldonaconta;
        }
      }
      
      void deposito(double valor = 0){
        if(valor > 0){
          saldo += valor;
     historico.push_back({"deposito", valor, saldo});
        }
      }
      
      void sacar(double retirar = 0){
        if(retirar > 0 && saldo >= retirar){
          saldo -= retirar;
          historico.push_back({"sacar", retirar, saldo});
        }else{
          limpatela();
          cout << "Saldo insuficiente" << endl << endl;
          cout << "Precione enter para continuar" << endl;
          cin.ignore(); cin.get();
          limpatela();
        }
      }
      
      void mostrar_historico(){
          for(const auto& h : historico){
            cout << "Tipo: " << h.tipo << endl;
            cout << "Valor: " << h.valor << endl;
            cout << "Saldo: " << h.saldo << endl << endl;
        }
      }
      
      double getsaldo(){
        return saldo;
      }
};
    
int main()
{
  double DP = 0, SC = 0;
  int opcao;
  conta_bancaria conta(DP);
  do{
    cout << "Saldo em conta: " << conta.getsaldo() << endl;
    cout << "1: Depositar saldo na conta." << endl;
    cout << "2: Sacar saldo em conta." << endl;
    cout << "3: Historico da conta." << endl;
    cout << "4: Sair." << endl;
    cin >> opcao;
    
    if(opcao == 1){
        limpatela();
        cout << "Qual o valor a se Depositado: " << endl;
        cin >> DP;
        
        if(DP <= 0){
            cout << endl << "Valor do deposito incorreto" << endl;
        }else{
            conta.deposito(DP);
        }
        
        limpatela();
    }
    
    if(opcao == 2){
        limpatela();
        cout << "Qual o valor a ser sacado" << endl;
        cin >> SC;
        
        if(SC <= 0){
            cout << "Valor incorreto." << endl;
        }else{
            conta.sacar(SC);
        }
        
    }
    
    if(opcao == 3){
        limpatela();
        cout << "Seu historico: " << endl;
        
        conta.mostrar_historico();
        cout << "Precione enter para continuar" << endl;
        cin.ignore(); cin.get();
        limpatela();
    }
    
    if(opcao == 4){
        break;
    }
  }while(true);
  
  limpatela();
  cout << "Programa finalizado" << endl;
  
  return 0;
}
