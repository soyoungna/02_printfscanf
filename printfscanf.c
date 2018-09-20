#include <stdio.h>

int main(int argc, char atgv[]) {
   char c;
   
   printf("input a character : ");
   scanf("%c", &c);
   
   printf("The next character of %c (%i) is %c (%i)\n", c, c, c+1, c+1);
   
   return 0;
   }
   

