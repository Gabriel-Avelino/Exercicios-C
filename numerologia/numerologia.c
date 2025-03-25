#include <stdio.h>

int main(void){
	int d, m, a, r;
	
	printf("dd/mm/aaaa: ");
	scanf("%d/%d/%d", &d, &m, &a);

	r = (d*100) + m + a;
	r = (r/100) + (r%100);
	r %= 5;

	switch(r){
		case 0: puts("Timido");	break;
		case 1: puts("Sonhador"); break;
		case 2: puts("Paquerador"); break;
		case 3: puts("Atraente"); break;
		case 4: puts("Irresistivel"); break;		
	}
	return 0;
}
