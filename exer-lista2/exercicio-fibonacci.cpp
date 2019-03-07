#include <stdio.h>
#include <stdlib.h>
// int argc = Numero de parametros passados
// char*argv[] = Parametros passados
// sizeof devolve o numero de bits a cada 4 bits é um inteiro

int main (int argc, char*argv[]) {
	
	int *vet;
	int n, i;
	int v1=0, v2=1, somaFib=0;
	
	printf("%s \n", argv[0]);
	sscanf(argv[1], "%d", &n);
	vet = (int*) malloc(n*sizeof(int));
	for (i=0;i<n;i++) {
		vet[i] = atoi(argv[i+2]);
	}
	free(vet);
	
	for (i=0;i<n;i++) {
		somaFib = v1 + v2;
		v1 = v2;
		v2 = somaFib; 
		printf("%d \n", somaFib);
	}

	return 0;
}
