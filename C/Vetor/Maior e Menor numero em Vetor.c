/******************************************************************************
Programa: Maior e Menor Numero em Vetor
Autor: Lucas Carvalho
Data: 27/05/2025
Descrição: Lê 10 números, encontra e mostra o maior 
           e o menor valor, com suas posições.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int vetor[10];
	int i, maior, menor, v_maior = 0, v_menor = 0;

	for(i = 0; i < 10; i++) {
		printf("Me informe o valores:\n");
		scanf("%d", &vetor[i]);
	}

	maior = vetor[0];
	menor = vetor[0];

	for(i = 0; i < 10; i++) {
		if(vetor[i] > maior) {
			maior = vetor [i];
			v_maior = i;
		}
	}

	for(i = 0; i < 10; i++) {
		if(vetor[i] < menor) {
			menor = vetor[i];
			v_menor = i;
		}
	}

	printf("\n------------------------------------------------------\n");
	printf("O maior numero e: %d (pocisC#o: %d).\n", maior, v_maior);
	printf("O menor numero e: %d (pocisC#o: %d).\n", menor, v_menor);
	printf("--------------------------------------------------------\n");

	return 0;
}