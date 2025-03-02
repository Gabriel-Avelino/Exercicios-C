#include <stdio.h>

int main(void){
	int num;
	printf("Digite o numero que voce deseja converter: ");
	scanf("%d", &num);
	
	printf("%d = %x\n", num, num);
	return 0;
}
