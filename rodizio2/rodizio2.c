#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char placa[9];
	char ultimo;
	
	fflush(stdin);
	printf("Placa: ");
	fgets(placa, sizeof(placa), stdin);
	fflush(stdin);

	ultimo = placa[strlen(placa)-1];

	switch(ultimo){
		case '1': puts("Segunda-Feira"); break;	
		case '2': puts("Segunda-Feira"); break;
		case '3': puts("Terca-Feira"); break;
		case '4': puts("Terca-Feira"); break;
		case '5': puts("Quarta-Feira"); break;
		case '6': puts("Quarta-Feira"); break;
		case '7': puts("Quinta-Feira"); break;
		case '8': puts("Quinta-Feira"); break;
		default: puts("Sexta-Feira");							
	}
	return 0;	
}
