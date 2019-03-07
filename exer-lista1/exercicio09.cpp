#include <stdio.h>

int main () {
	
	int N=1; // Entrada
	
	printf ("1 \n");
	for (int i=1;i<20;i++) {
		N = N * 3;
		printf("%d \n", N);
	}
	
	return 0;
}
