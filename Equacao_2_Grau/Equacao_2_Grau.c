#include <stdio.h>
#include <math.h>

int main(void){
	float a, b, c, x1, x2;
	printf("a b c:");
	scanf("%f %f %f", &a, &b, &c);

	x1 = (-b + sqrt(pow(b, 2) - 4 * a * c))/(2 * a);
	x2 = (-b - sqrt(pow(b, 2) - 4 * a * c))/(2 * a);
	printf("{x1, x2} = {%.2f, %.2f}\n", x1, x2);
}
