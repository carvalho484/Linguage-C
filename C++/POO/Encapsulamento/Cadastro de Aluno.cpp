/******************************************************************************
Projeto: Cadastro de Aluno
Autor: Lucas Carvalho
Data: 22/08/2025
Descrição:
   Programa que cadastra um aluno, recebe seu nome e nota,
   valida os dados e exibe o resultado.
*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

class aluno{
  private:
    string nome;
    double nota;
    
    public:
      aluno(string nome1){
        nome = nome1;
        nota = 0;
      }
      
      void setNota(double nota1){
        if(nota1 >= 0 && nota1 <= 10) nota = nota1;
      }
      
      string getNome(){
        return nome;
      }    
      
      double getNota(){
        return nota;
      }
};

int main()
{
  string NM;
  double NT;
  cout << "Qual o nome do aluno ?" << endl;
  getline(cin, NM);
  
  aluno A(NM);
  
  cout << "Qual e a nota do aluno ?" << endl;
  cin >> NT;
  
  A.setNota(NT);
  
  cout << "O aluno: " << A.getNome() << " Tem nota: " << A.getNota() << endl;
  
  return 0;
}