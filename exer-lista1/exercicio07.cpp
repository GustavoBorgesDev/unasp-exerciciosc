#include <stdio.h>

int main () {
		
	int N; // Entrada
	int contDentro=0;
	int contFora=0;
	
	for (int i=0;i<10;i++) {
		scanf("%d", &N);
		if (N >= 10 && N <= 20) {
			contDentro++;
		} else {
			contFora++;
		}
	}
	
	printf("Numeros dentro do intervalo: %d \n", contDentro);
	printf("Numeros fora do intervalo: %d", contFora);
		
	return 0;
}
