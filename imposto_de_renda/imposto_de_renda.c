#include <stdio.h>

int main(void) {
    float salario, aliquota, imposto;

    printf("Salario: ");
    scanf("%f", &salario);

    if (salario <= 1903.98) {
        aliquota = 0;    
    }
    else if (salario > 1903.98 && salario < 2826.66) {
        aliquota = 7.5 / 100;
    }
    else if (salario > 2826.65 && salario < 3751.06) {
        aliquota = 15.0 / 100;    
    }
    else if (salario > 3751.05 && salario < 4664.69) {
        aliquota = 22.5 / 100;    
    }
    else {
        aliquota = 27.5 / 100;
    }

    imposto = salario * aliquota;

    printf("Imposto: R$ %.2f\n", imposto);

    return 0;
}
