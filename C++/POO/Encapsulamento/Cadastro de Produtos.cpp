/******************************************************************************
Projeto: Cadastro de Produtos
Autor: Lucas Carvalho
Data: 21/08/2025
Descrição:
     Programa que cadastra um produto, recebe seu nome e preço,
     valida os dados (não aceita preço negativo) e exibe o resultado.
*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

class Produto{
  private:
    string nome;
    double preco = 0;
    
    public:
      
      Produto(string nome1){
        nome = nome1;
      }
      
      void setPreco(double preco1){
        if(preco1 >= 0) preco = preco1;
        else preco = 0;
      }
      
      void exibir(){
        cout << endl << "Produto: " << nome << endl;
        cout << "valor: R$ " << setprecision(2) << preco << endl;
      }
  
};

int main()
{
  string NM;
  double PR;
  
  cout << "Qual o nome do produto ?" << endl;
  getline(cin, NM);
  
  Produto P(NM);
  
  cout << endl <<"Qual o valor do produto ?" << endl;
  cin >> PR;
  
  P.setPreco(PR);
  
  P.exibir();
  
  return 0;
}