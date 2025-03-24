#include <stdio.h>

int main(void){
	int a, b;
	printf("Numeros: ");
	scanf("%d %d", &a, &b);

	if (a > b) printf("%d e maior\n", a);

	if (a < b) printf("%d e maior\n",b);

	if (a == b) printf("Ambos sao iguais\n");
	
	return 0;
}
