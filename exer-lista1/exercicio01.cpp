// Grupo: Gustavo de Jesus Borges
// RA: 90390

#include <stdio.h>

int main () {
	
	int N; // Valor que sera digitado repetidamente
	int i=0; // Contador
	
	int somaPar=0;
	int somaImpar=0;
	
	
	while (N != 99) {
		scanf("%d", &N);
		
		if (N % 2 == 0) {
			somaPar = somaPar + 1;
		} else if (N % 2 != 0) {
			somaImpar = somaImpar + 1;
		}
		
		i = i + 1;
	}
	
	printf("\n");
	printf("Percentual de numeros Pares: %d \n", somaPar);
	printf("Percentual de numeros Impares: %d \n", somaImpar);
	printf("Fim do processo.");
	
	return 0;
}
