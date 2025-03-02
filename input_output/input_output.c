#include <stdio.h>
#include <stdlib.h>
int main(void){
	int idade;
	char sexo[256];

	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	fflush(stdin);
	printf("\nDigite o seu sexo: ");
	fgets(sexo, sizeof(sexo), stdin);
	fflush(stdin);

	printf("Idade = %d\n", idade);
	printf("Sexo = %s\n", sexo);

	return 0;
}
