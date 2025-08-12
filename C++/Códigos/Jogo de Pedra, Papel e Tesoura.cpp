/******************************************************************************
Programa: Jogo de Pedra, Papel e Tesoura
Autor: Lucas Carvalho
Data: 11/08/2025
Descrição:
    Programa em C++ que simula o jogo 
    Pedra, Papel e Tesoura contra o computador.
    O jogador escolhe uma opção e o computador 
    sorteia outra usando números aleatórios.
    O programa exibe o resultado da rodada.
*******************************************************************************/
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int opcao;
    
    cout << "========================================" << endl;
    cout << "=   JOGO DE PEDRA, PAPEL E TESOURA !!  =" << endl;
    cout << "========================================" << endl;
    
    do{
        cout << endl << "Escolha algumas das opçoes abaixo:" << endl;
        cout << "1: Pedra" << endl;
        cout << "2: Papel" << endl;
        cout << "3: Tesoura" << endl;
        cout << "0: sair" << endl;
        cin >> opcao;
        
        if(opcao == 0){
            break;
        }
        
        if(opcao < 1 || opcao > 3){
            cout << endl << "Valor incorreto !!, tente novamete." << endl << endl;
            continue;
        }
    
        int escolha_humana = opcao - 1;
        int escolha_maquina = rand() % 3;
        
        string usuario, computador;
        switch(escolha_humana){
            case 0: usuario = "pedra"; break;
            case 1: usuario = "papel"; break;
            case 2: usuario = "tesoura"; break;
        }
        switch(escolha_maquina){
            case 0: computador = "pedra"; break;
            case 1: computador = "papel"; break;
            case 2: computador = "tesoura"; break;
        }
        
        cout << endl << "Você escolheu: " << usuario << endl;
        cout << "Seu oponente escolheu: " << computador << endl;
        
        if(usuario == computador){
            cout << "Empatou !!" << endl << endl;
        }else if(escolha_humana == 0 && escolha_maquina == 2 ||
                 escolha_humana == 1 && escolha_maquina == 0 ||
                 escolha_humana == 2 && escolha_maquina == 1){
                    cout << "Você ganhou !!" << endl << endl;
                }
        else{
            cout << "Você perdeu !!" << endl << endl; 
        }       
        
    }while(true);
    
    cout << "Obrigado por jogar." << endl;
    
    return 0;
    
}