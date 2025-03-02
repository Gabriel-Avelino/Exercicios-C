#include <stdio.h>
#include <stdlib.h>
int main(void){
	char Cadeia[12];
	int i;

	printf("Escreva: ");
	
	for(i=0; i<12; i++){
		scanf("%c", &Cadeia[i]);
		fflush(stdin);
	};

	for(i=0; i<12; i++){
		printf("%c", Cadeia[i]);
	};
	return 0;
};
