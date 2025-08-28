/******************************************************************************
Programa : Herança e Polimorfismo em Animais
Autor    : Lucas Carvalho
Data     : 28/08/2025
Descrição: Este programa demonstra herança e sobrescrita
             de métodos em C++. Define uma classe base
             Animal com um método virtual 'comer', e duas
             classes derivadas (Cachorro e Gato) que
             substituem o método para imprimir mensagens
             específicas de cada animal. O main cria
             objetos das classes derivadas e chama o
             método 'comer' para cada um.
*******************************************************************************/
#include <iostream>

using namespace std;

class Animal{
  public:
    
    virtual void comer(){
      cout << "O animal esta comendo" << endl;
    } 
};

class Cachorro : public Animal{
  public:
    void comer()override{
      cout << "O cachorro come, Au! Au!" << endl;
    }
};

class Gato : public Animal{
  public:
    void comer()override{
      cout << "O gato come, Miau" << endl;
    }
};

int main()
{
  Cachorro C;
  Gato G;
  
  C.comer();
  
  G.comer();
  
  return 0;
}