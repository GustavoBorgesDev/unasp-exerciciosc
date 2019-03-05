#include <stdio.h>

int main () {
	
	int N; // Entrada
	int contaPrimo=0;
	
	printf("Digite um numero:\n");
	scanf("%d", &N);
	
	for (int i=0;i<=N;i++) {
		//printf("%d \n", i);
		if (i % N == 0 && i % N == 1) {
			contaPrimo++;
		}
	}
	
	if (contaPrimo == 2) {
		printf("E Primo");
	} else {
		printf("Nao e Primo");
	}
	
	return 0;
}
