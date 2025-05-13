/******************************************************************************
Programa: Tabuada.
Autor: Lucas Carvalho
Data: 13/05/2025
Descrição: Este programa solicita ao usuário um número entre 0 e 10.
Caso o número seja válido, exibe a tabuada desse número de 0 a 10
usando a estrutura de repetição while.
*******************************************************************************/
#include <stdio.h>

int main (void)
{
	double n;
	int m = 1;
	printf("Qual e o valor entre 0 e 10.\n");
	scanf("%lf", &n);
	printf("\n");

	if(n < 0 || n > 10) {
		printf("Valor incorreto! o numero tem que está, entre 0 e 10.");
	} else {
		printf("Tabuada %.lf\n", n);
		while(m <= 10) {
			double soma = m * n;
			printf("%d x %.0lf = %.0lf\n",m, n, soma);
			m++;
		}
	}
	return 0;
}