/******************************************************************************
Programa: Avaliação de Consumo Médio por Entrega de Filiais
Autor: Lucas Carvalho
Data: 08/08/2025
Descrição: Este programa lê os dados de várias filiais de uma empresa de motoboys,
  onde para cada filial é informado o número de entregas realizadas e a
  distância total percorrida. O programa calcula a distância média por entrega,
  ordena os dados por distância média e número de entregas e exibe o resultado
*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

void ler_dados_cidade (int f, vector<pair<int, int>> &dados, int &entrega_totais, int &km_totais){
    for(int i = 0; i < f; i++){
        int numeros_entrega, km;
        cin >> numeros_entrega >> km;
        
        int distancia_por_entrega = km / numeros_entrega;
        
        dados.push_back ({numeros_entrega, distancia_por_entrega});
        
        entrega_totais += numeros_entrega;
        km_totais += km;
    }
};

void montagem(vector<pair<int, int>> &dados){
    for(size_t i = 0; i < dados.size(); i++){
        cout << dados[i].first << "-" << dados[i].second;
        if(i < dados.size() -1) cout << " ";
    }
};

int main()
{
    int f;
    int filial = 1;
    
    while(cin >> f && f != 0){
        vector<pair<int, int>> dados;
        int entrega_totais = 0;
        int km_totais = 0;
        
        ler_dados_cidade (f, dados, entrega_totais, km_totais);
        
        sort(dados.begin(), dados.end(), [](pair<int, int> a, pair<int, int> b){
            if(a.second != b.second){
            return a.second < b.second;
            }else{
                return a.first < b.first;
            }  
        });
    
        if(filial > 1) cout << endl;
    
        cout << "Filial# " << filial << ":" << endl;
    
        montagem (dados);
        
        cout << endl;
    
        double media = (double)km_totais / entrega_totais;
    
        cout << fixed << setprecision(2);
        cout << "Media de distancia: " << floor(media * 100) / 100 << " km por entrega." << endl;
        
        filial ++;
    }
    
    return 0;
}