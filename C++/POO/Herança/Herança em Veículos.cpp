/******************************************************************************
Programa : Herança em Veículos
Autor    : Lucas Carvalho
Data     : 28/08/2025
Descrição: Este programa demonstra herança em C++ com
             a classe base Veiculo e duas classes derivadas
             (Carro e Moto). 
*******************************************************************************/
#include <iostream>

using namespace std;

class Veiculo{
  public:
    int velocidade = 0;
    
    void acelerar(int v){
      velocidade = v;
      cout << "Velocidade atual " << velocidade << " KM/h" << endl;
    }  
};

class Carro : public Veiculo{
  public:
    int portas;
  
    Carro(){
      portas = 4;
    }
    
    void abrirportas(){
      cout << "O carro abriu as " << portas << " portas" << endl;
    }
};

class Moto : public Veiculo{
  public:
    void empinar(){
      cout << "A moto empinou" << endl;
    }
};

int main()
{
  Carro C;
  Moto M;
  
  C.acelerar(50);
  C.abrirportas();
  
  cout << endl;
  
  M.acelerar(100);
  M.empinar();
  
  return 0;
}