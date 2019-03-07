#include <stdio.h>

int main () {
	
	int N; // Entrada
	int i; // Contador
	int soma=0; // vai somar os 10 numeros
	
	scanf("%d", &N);
	
	for (i=0;i<20;i++) {
		if (N % 2 == 0) {
			soma = soma + N;
		}
		N = N + 1;
	}
	
	printf("Soma dos pares: %d \n", soma);
	
	return 0;
}
