// Grupo: Gustavo de Jesus Borges
// RA: 90390

#include <stdio.h>

int main () {
	
	int E, MN;
	int i=0, cont=0;
	int aux1=0, aux2=0;
	int somaMN=0;
	
	// Variavel 'CONT' Limita o numero de digitos de 2 em 2
	
	while (true) {
		scanf("%d", &E);
		if (E % 2 != 0) { // Se nao for Z entra nos sub If's
			cont = cont + 1; // Primeira Entrada contada
			if (cont == 1) {
				aux1 = E;
			} else if (cont == 2) { // Segunda Entrada contada
				aux2 = E;
				if (aux2 == aux1 + 2) {
					MN = aux1 * aux2;
					printf("Multiplicacao: %d \n", MN);
					somaMN = + somaMN + MN;
				} else if (aux2 != aux1 + 2) {
					printf("Nao sao consecutivos \n");
				}
				cont = 0; // Reseta o Limitador
				printf("Contador de entradas resetado\n");
			}
		} if (E == 0) {
			printf("\n\n");
			printf("Soma Total: %d \n", somaMN);
			printf("Processo Finalizado.");
			break;
		}
		
		i++;
	}
	
	return 0;
}
