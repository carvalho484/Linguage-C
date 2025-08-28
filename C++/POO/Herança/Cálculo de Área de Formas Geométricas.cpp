/******************************************************************************
Programa : Cálculo de Área de Formas Geométricas
Autor    : Lucas Carvalho
Data     : 28/08/2025
Descrição:  Demonstra herança em C++ com a classe base
            Forma e derivadas Circulo e Retangulo. 
            Calcula e exibe as áreas correspondentes.
*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

class Forma{
  public:
    
    void mostrartipo(){
      cout << "Calculo de area" << endl;
    }
};

class Circulo : public Forma{
  public:
    double PI = 3.14159;
    double area_circulo;
  
    
    void calcularArea(double raio){
      area_circulo = PI * pow(raio, 2);
      cout << "A area do circulo é " << area_circulo << "." << endl;
    }
};

class Retangulo : public Forma{
  public:
    double area_retangulo;
    
    void calcularArea(double largura, double altura){
    
      area_retangulo = largura * altura;
      
      cout << "A area do retangulo é " << area_retangulo << "." << endl;
    }
};

int main()
{
  Circulo C;
  Retangulo R;
  
  C.calcularArea(5);
  cout << endl;
  R.calcularArea(5, 10);
  
  return 0;
}