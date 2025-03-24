#include <stdio.h>
#include <conio.h>

int main(void){
	float p1, p2, f, m;
	printf("Notas? ");
	scanf("%f %f", &p1, &p2);
	printf("Faltas? ");
	scanf("%f", &f);
	m = (p1 + p2)/2;
	if (m >= 6 && f <= 5)	{_textcolor(9); puts("Aprovado");}
	else {_textcolor(12); puts("Reprovado");}
	return 0;
}
