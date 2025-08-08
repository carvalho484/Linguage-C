/******************************************************************************
Programa: Análise de Consumo por Região
Autor: Lucas Carvalho
Data: 08/08/2025
Descrição: O programa simula a análise de consumo de pacotes
             por região. Para cada região, recebe a quantidade 
             de pessoas e pacotes consumidos, calcula o consumo 
             médio por pessoa, e exibe os dados ordenados pelo 
             consumo individual crescente, além da média truncada.
*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int regiao = 1;
    
    while(cin >> n && n != 0){
        vector<pair<int, int>>dados;
        int total_de_pessoas = 0;
        int pacotes_total = 0;
        
        for(int i = 0; i < n; i++){
            int moradores, pacotes;
            cin >> moradores >> pacotes;
            
            int cosumo_por_pessoa = pacotes / moradores;
            
            dados.push_back ({moradores, cosumo_por_pessoa});
            
            total_de_pessoas += moradores;
            pacotes_total += pacotes;
        }
        
        sort(dados.begin(), dados.end(), [](pair<int,int> a, pair<int,int> b){
            return a.second < b.second;
        });
        
        if(regiao > 1) cout << endl;
        
        cout << "Regiao# " << regiao  << ":" << endl;
        
        for(size_t i = 0; i < dados.size(); i++){
            cout << dados[i].first << "-" << dados[i].second;
            if(i < dados.size() - 1){
                cout << " ";
            }
        }
        
        cout << endl;
        
        double media = (double)pacotes_total / total_de_pessoas;
        int inteiro = (int)(media * 100);
        double media_truncada = inteiro / 100.00;
        
        cout << fixed << setprecision(2) << "Media de pacotes: " << media_truncada << " por pessoa." << endl;
        
        regiao ++;
    }
    
    return 0;
}