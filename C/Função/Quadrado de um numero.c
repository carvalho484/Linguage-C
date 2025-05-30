/******************************************************************************
Programa: Calcula o quadrado de um número.
Autor: Lucas Carvalho.
Data: 30/05/2025.
Descrição: Lê um número inteiro do usuário e imprime 
           o quadrado desse número usando uma função.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int quadrado(int a) {
    return (a * a);
}

int main(void)
{
    int a, resultado;
   printf("Qual é o valor para calcular o quadrado:\n");
   scanf("%d", &a);
   
   resultado = quadrado(a);
   
   printf("O quadrado de %d é %d\n", a, resultado);
}
