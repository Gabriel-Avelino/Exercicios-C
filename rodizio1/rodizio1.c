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

	if (ultimo == '1' || ultimo == '2'){
		puts("Segunda-Feira");
	}
	else if (ultimo == '3' || ultimo == '4'){
		puts("Terca-Feira");
	}
	else if (ultimo == '5' || ultimo == '6'){
		puts("Quarta-Feira");
	}
	else if (ultimo == '7' || ultimo == '8'){
		puts("Quinta-Feira");
	}
	else {
		puts("Sexta-Feira");
	}
	return 0;	
}
