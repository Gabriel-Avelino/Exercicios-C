#include <stdio.h>

int main(void) {
   int x=5, y=5;
   ++x;
   y--;
   printf("x=%d y=%d\n",x,y); // x=6 y=4
   return 0;
}
