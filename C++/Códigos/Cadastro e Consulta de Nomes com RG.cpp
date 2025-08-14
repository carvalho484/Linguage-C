/******************************************************************************
Programa: Cadastro e Consulta de Nomes com RG
Autor: Lucas Oliveira
Data de criação: 12/08/2025
Descrição: Programa que permite inserir, procurar e listar nomes junto com seus respectivos RGs.
             O usuário pode inserir vários registros, buscar um registro específico pelo nome e RG,
             e imprimir toda a lista cadastrada.
*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    int opcao, rg, quantidade, procura_rg;
    vector<pair<string, int>> nome_rg;
    string nome, procura_nome;
    bool encontrado;
    
    do{
       cout << endl << "Operações" << endl;
       cout << "1: inserir um nome." << endl;
       cout << "2: procurar um nome na lista." << endl;
       cout << "3: imprimir a lista." << endl;
       cout << "0: fechar o sistema." << endl;
       cout << "Escolha um numero e aperte enter." << endl;
       cin >> opcao;
       
       if(opcao == 0){
           break;
       }
       
       if(opcao < 1 || opcao > 3){
           cout << endl << "Numero da opreção incorreto!, tente de novo." << endl << endl;
           continue;
       }
       
       switch(opcao){
           case 1:
           
           cout << endl << "Quantos nomes serão inseridos ?" << endl;
           cin >> quantidade;
           
           for(int i = 0; i < quantidade; i++){
               cout << "Digite o nome e o RG." << endl;
               cin >> nome >> rg;
           
               nome_rg.push_back({nome, rg});
           }
           break;
           
           case 2:
           cout << endl << "Informe o primeiro nome é o RG:" << endl;
           cin >> procura_nome >> procura_rg;
           encontrado = false;
           
           for(auto &p :nome_rg){
               if(p.first == procura_nome && p.second == procura_rg ){
                   cout << endl << "Nome encontrado " << p.first << " de RG: " << p.second << endl;
                   encontrado = true;
                   break;
               }
           }
            if(encontrado == false){
                cout << "Nome e RG não encontrado" << endl;
            }
           break;
           
           case 3:
           if (nome_rg.empty()) {
                cout << endl << "A lista está vazia." << endl << endl;
           }else{
               for(auto &n :nome_rg){
               cout << n.first << " " << n.second << "." << endl;
               }
           }    
           break;
       }
       
    }while(true);
    
    cout << endl << "Sistema encerrado" << endl;
    
    return 0;
}