#include <stdio.h>

void desligarTudo () {  printf("desligue tudo. \n\n"); }
void ligarTv () { printf("ligar TV \n\n"); }
void ligarRadio() { printf("ligar rádio \n\n"); }
void ligarLuz() { printf("ligar a luz \n\n"); }
void tentarNovamente () { printf("tente novamente \n\n"); }

int main () {
	
	int N; // Entrada
	
	while (true) {
		scanf("%d", &N);
		
		if (N == 0) {
			desligarTudo();
			break;
		} else if (N == 1) {
			ligarTv ();
		} else if (N == 2) {
			ligarRadio();
		} else if (N == 3) {
			ligarLuz();
		} else {
			tentarNovamente();
		}
		
	}
	
	return 0;
}
