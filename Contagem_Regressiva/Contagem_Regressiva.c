#include <stdio.h>

int main(void){
	int n;
	printf("Numero: ");
	scanf("%d", &n);

	for(int c = n; c >= 0; c--){
		printf("%d\n", c);	
	}
}
