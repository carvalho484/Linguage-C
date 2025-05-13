/******************************************************************************
Programa: Verificar Par ou Ímpar
Autor: Lucas Carvalho
Data: 09/05/2025
Descrição: O programa solicita um número entre 0 e 10. Se o número for válido, 
usa um loop while para verificar se os números de entrada até 10 
são pares ou ímpares utilizando a função fmod da biblioteca math.h. 
O número é exibido junto com sua classificação e incrementado até atingir 10.
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main (void)
{
    double i;
    printf("escreva um numero entre 0 a 10: ");
    scanf("%lf", &i);
    
    if (i < 0 || i > 10) {
        printf("Valor incorreto");
    }else {
        while(i < 11) {
            if (fmod (i, 2.0) == 0) {
                printf("%.0lf par\n", i);
            }else {
                printf("%.0lf impar\n",i);
            }
            i++;
        }
    }
    return 0;
}
