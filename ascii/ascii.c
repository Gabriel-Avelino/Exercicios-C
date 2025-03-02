#include <stdio.h>

int main(void){
	char caracter;
	printf("Digite um caractere para exibir seu codigo ASCII: ");
	scanf("%c", &caracter);

	printf("%c = %d\n", caracter, caracter);
	return 0;
}
