#include <stdio.h>
#include <math.h>
#include <conio.h>
int main (void){
	float peso, altura, imc;
	printf("Qual o peso e a altura? ");
	scanf("%f %f", &peso, &altura);
	imc = peso / pow(altura, 2.0);
	printf("IMC = %.1f\n", imc);

	if (imc < 18.5){
		_textcolor(12); 
		printf("Magra\n");
		_textcolor(7);
	} else if (imc >= 18.5 && imc < 31.0){
		_textcolor(2);
		printf("Normal\n");
		_textcolor(7);
	} else{
		_textcolor(12);
		printf("Obesa\n");
		_textcolor(7);	
	}
	return 0;
}
