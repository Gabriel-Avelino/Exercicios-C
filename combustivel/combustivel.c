#include <stdio.h>

int main(void){
	float litros, preco, total, desconto;

	printf("Litros?: ");
	scanf("%f", &litros);
	printf("Preco?: ");
	scanf("%f", &preco);

	total = litros * preco;
	if (total > 100.00){
		desconto = 0.05 * total;
		printf("Desconto: %.2f\n", desconto);
		total -= desconto;
	}
	printf("Total: %.2f\n", total);
	return 0;
}
