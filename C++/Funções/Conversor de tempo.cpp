/******************************************************************************
Problema: beecrowd 1019 - Conversão de Tempo.
Autor: Lucas Carvalho.
Data: 02/06/2025.
Descrição: O programa recebe um valor inteiro representando a duração de um evento em segundos,
           e converte esse valor para o formato de tempo com horas, minutos e segundos (H:M:S).
*******************************************************************************/
#include <iostream>
using namespace std;

struct tempo {
    int horas;
    int minutos;
    int segundos;
};

tempo converter_tempo(int duracao) {
    tempo t;
    t.horas = duracao / 3600;
    duracao %= 3600;
    t.minutos = duracao / 60;
    duracao %= 60;
    t.segundos = duracao;
    return t;
}

int main() {
    int duracao;
    cin >> duracao;

    tempo resultado = converter_tempo(duracao);

    cout << resultado.horas << ":" << resultado.minutos << ":" << resultado.segundos << endl;

    return 0;
}
