#include <stdio.h>
#include <conio.h>

int main(void) {
   for(int c=0; c<=255; c++) {
      printf("%3d => %c\n",c,c);
      if( c%16==15 ) {
         printf("\nPressione enter...");
         _getch();
         _clrscr();
      }
   }
   return 0;
}
