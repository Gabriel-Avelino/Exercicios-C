#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
   int col=40, lin=12;
   while( 1 ) {
      _gotoxy(col,lin); 
      _putch(219);
      switch( toupper(_getch()) ) {
         case 'W': if( lin> 1 ) lin--; break;
         case 'S': if( lin<24 ) lin++; break;
         case 'D': if( col<80 ) col++; break;
         case 'A': if( col> 1 ) col--; break;
         case 'F': exit(0);
      }
   }
   return 0;
}
