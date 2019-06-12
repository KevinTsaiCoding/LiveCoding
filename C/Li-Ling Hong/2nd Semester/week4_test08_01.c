// Test 08_01.c
#include <stdio.h>
 
int main( void )
{ 
   char c;
   int loop = 1, ret;
   while (loop==1){
   loop = 0;
   puts("To show the ASCII code for a charactor, please input a character ");
   scanf(" %c", &c);
   printf("the character %c is number %d  %x\n", c, c, c);
   puts("test again? 1 for yes ");
   ret = scanf("%d", &loop);
   if (ret == loop)
      loop = 1;
   else
	  loop = 0;
   }
   printf("the ASCII code of '\\n' is %d \n", '\n');
   system("pause");
   
 
} // end main




