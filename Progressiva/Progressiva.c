#include <stdio.h>

void cp(int n) {
	static i = 1;
	if (i <= n){
		printf("%d ", i);
		i++;
		cp(n);
	}
}

int main(void) {
   int n;
   printf("Num? ");
   scanf("%d",&n);
   cp(n);
   return 0;
}
