#include <stdio.h>
#include <stdlib.h>

int main(void){
	char Cadeia[12];
	printf("Escreva: ");
	fgets(Cadeia, sizeof(Cadeia), stdin);
	printf("%s\n", Cadeia);
	return 0;
}
