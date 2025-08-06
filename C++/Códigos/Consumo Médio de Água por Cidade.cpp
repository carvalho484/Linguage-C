/******************************************************************************
Programa: Consumo Médio de Água por Cidade
Autor: Lucas Carvalho
Data: 06/08/2025
Descrição: 
   Este programa processa dados de consumo de água em diversas cidades.
   Para cada cidade, são fornecidos N registros contendo a quantidade
   de moradores e o consumo total. O programa calcula o consumo médio
   por pessoa e agrupa os dados por consumo por pessoa.
*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    int cidade = 1;
    double medio;
    
    while(cin >> n && n != 0){
        vector<pair<int, int>> dados;
        int pessoas_totais = 0;
        int consumo_total = 0;
        
        for(int i = 0; i < n; i++){
            int moradores, consumo;
            cin >> moradores >> consumo;
            
            int consumo_por_moradores = consumo / moradores;
            
            dados.push_back({consumo_por_moradores, moradores});
            
            pessoas_totais += moradores;
            consumo_total += consumo;
        }
        
        sort(dados.begin(), dados.end());
        
        vector<pair<int, int>> resposta;
        for(auto& d : dados){
            if(!resposta.empty() && resposta.back().first == d.first){
                resposta.back().second += d.second;
            }else{
                resposta.push_back (d);
            }
        }
        
        if(cidade > 1){
            cout << endl;
        }
        
        cout << "Cidade# " << cidade << ":\n";
        
        for(size_t i = 0; i < resposta.size(); i++){
            cout << resposta[i].second << "-" << resposta[i].first;
            if(i < resposta.size() - 1){
                cout << " ";
            }
        }
        
        cout << endl;
        
        medio = (double)consumo_total / pessoas_totais;
        cout << "Consumo medio: ";
        cout << fixed << setprecision(2) << floor(medio * 100) / 100 << " m3." << endl;
        
        cidade++;
    }
    
    
    return 0;
    
}    