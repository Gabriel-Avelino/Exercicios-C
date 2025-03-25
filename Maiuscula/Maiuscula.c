#include <stdio.h>

#define maiuscula(c) ((c) >= 'A' && (c) <= 'Z')

int main(void) {
   char x;
   printf("Caractere? ");
   scanf(" %c", &x);  // Adicionado espaço antes de %c para ignorar espaços em branco
   printf("Maiuscula: %s\n", maiuscula(x) ? "sim" : "nao");
   return 0;
}
