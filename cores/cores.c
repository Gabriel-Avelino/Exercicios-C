#include <stdio.h>
#include <conio.h>

int main(void){
	for(int c = 0; c <= 15; c++){
		_textcolor(c);
		printf("Cor %d\n", c);	
	}
	return 0;
}
