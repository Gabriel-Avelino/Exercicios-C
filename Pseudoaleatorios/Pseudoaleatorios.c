#include <stdio.h>
#include <conio.h>
#include <time.h>

int npa(void) {
   static unsigned s=1234;
   auto unsigned n=s%100;
   s += s/10;
   return n;
}

int main(void) {
   while( !_kbhit() ) {
      printf("%d\n",npa()); 
      _sleep(1);
   }
   return 0;
}
