/******************************************************************************
Programa : Herança com Pessoa, Aluno e Professora
Autor    : Lucas Carvalho
Data     : 28/08/2025
Descrição: Este programa demonstra herança e encapsulamento
           em C++. Cria uma classe base Pessoa, e duas
           classes derivadas: Aluno (com matrícula) e
           Professora (com disciplina). O programa exibe
           os dados completos de cada indivíduo.
*******************************************************************************/
#include <iostream>

using namespace std;

class Pessoa{
  private:
    string nome;
    int idade;
    
    public:
      Pessoa(string N, int I){
        setNome(N);
        setIdade(I);
      }
      
      void setNome(string N){
        nome = N;
      }
      
      void setIdade(int I){
        if(I >= 0) idade = I;
        else idade = 0;
      }
      
      void mostrardados(){
        cout << "Nome: " << nome << " | " << "Idade " << idade << endl; 
      }
};

class Aluno : public Pessoa{
  private:
    int matricula;
    
    public:
      Aluno(string N, int I, int MT) : Pessoa(N, I){
      matricula = MT;
      }
      
      void setMatricula(int MT){
        if(MT >= 0)matricula = MT;
        else matricula = 0;
      }
      
      void mostrardados(){
        Pessoa::mostrardados();
        cout << "Matricula: " << matricula << endl;
      }
};

class Professora : public Pessoa{
  private:
    string diciplina;
    
    public:
      Professora(string N, int I, string DC) : Pessoa(N, I){
        setDiciplina(DC);
      }
      
      void setDiciplina(string DC){
        diciplina = DC;
      }
      
      void mostrardados(){
        Pessoa::mostrardados();
        cout << "Diciplina: " << diciplina << endl;
      }
};

int main()
{
  Aluno A("Lucas", 25, 48);
  Professora PF("Maria", 35, "Matematica");
  
  A.mostrardados();
  cout << endl;
  PF.mostrardados();
  
  return 0;
}