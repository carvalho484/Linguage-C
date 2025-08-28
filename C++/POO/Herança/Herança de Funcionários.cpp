/******************************************************************************
Programa : Herança de Funcionários
Autor    : Lucas Carvalho
Data     : 28/08/2025
Descrição: Este programa demonstra herança em C++ com
             a classe base Funcionario e duas classes
             derivadas (Gerente e Estagiario). 
*******************************************************************************/
#include <iostream>

using namespace std;

class Funcionario{
  public:
    string nome;
    double salario;
    
    void dados(string nome_F, double salario_F){
      nome = nome_F;
      salario = salario_F;
      
      cout << "Nome: " << nome << " | Salario: R$ " << salario << endl;
    }
};

class Gerente : public Funcionario{
  public:
    
    void mostrarcargo(){
      cout << "Cargo: Gerente." << endl;
    }
};

class Estagiario : public Funcionario{
  public:
    
    void mostrarcargo(){
      cout << "Cargo: Estagiario." << endl;
    }
};

int main()
{
  Gerente G;
  Estagiario E;
  
  G.dados("Joao", 3200);
  G.mostrarcargo();
  
  cout << endl;
  
  E.dados("Maria", 1800);
  E.mostrarcargo();
  
  return 0;
}