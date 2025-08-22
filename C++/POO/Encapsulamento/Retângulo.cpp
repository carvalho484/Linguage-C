/******************************************************************************
Projeto: Retângulo
Autor: Lucas Carvalho
Data: 21/08/2025
Descrição:
     Programa que cria um retângulo, recebe largura e altura,
     calcula e exibe a área e o perímetro.
*******************************************************************************/
#include <iostream>

using namespace std;

class Retangulo{
  private:
    double largura;
    double altura;
    
    public:
      
      Retangulo(){
        largura = 0;
        altura = 0;
      }
      
      void setLargura(double largura1){
        if(largura1 >= 0) largura = largura1;
        else largura = 0;
      }
      
      void setAltura(double altura1){
        if(altura1 >= 0) altura = altura1;
        else altura = 0;
      }
      
      double getArea(){
        double area = largura * altura;
        return area;
      }
      
      double getPerimetro(){
        double perimetro = 2 * (altura + largura);
        return perimetro;
      }
    
};

int main()
{
  Retangulo R;
  double LG, AT;
  
  cout << "Qual e a largura do retangulo ?" << endl;
  cin >> LG;
  
  R.setLargura(LG);
  
  cout << "Qual e a altura do retangulo ?" << endl;
  cin >> AT;
  
  R.setAltura(AT);
  
  cout << endl << "Area: " << R.getArea() << endl;
  cout << "Perimetro: " << R.getPerimetro() << endl;
  
  return 0;
}