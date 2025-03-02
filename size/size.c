#include <stdio.h>
int main(void){
	char v = 'A';
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(1.2));
	printf("%d\n", sizeof(v));
	printf("%d\n", sizeof(v + 1));
	return 0;
}
