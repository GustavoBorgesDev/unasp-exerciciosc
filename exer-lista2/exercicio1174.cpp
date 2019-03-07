#include <stdio.h>
// int argc = Numero de parametros passados
// char*argv[] = Parametros passados
int main (int argc, char*argv[]) {
	
	int N; // Entrada
	int vet[10]; // Array
	
	scanf("%d", &N);
	printf("\n");
	
	for (int i=0;i<10;i++) {
		N = N * 2;
		vet[i] = N;
		printf("N[%d] = %d \n", i, vet[i]);	
	}
	
	return 0;
}
