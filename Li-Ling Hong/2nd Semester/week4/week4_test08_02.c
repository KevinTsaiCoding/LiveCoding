// Test 08_02.c
#include <stdio.h>
int main( void )
{ 
   char word[20];
   int loop = 1, ret;
   while (loop==1){
   loop = 0;
   puts("Please input the word with less than 20 charactors : ");
   scanf(" %19s", word);
   printf(" You enter %s \n Input again to test more than 20 charactors : \n", word);
   scanf("%s", word);
   printf(" You enter %s \n", word);
   puts("test again? 1 for yes ");
   ret = scanf("%d", &loop);
   if (ret == loop)
      loop = 1;
   else
	  loop = 0;
   }
   
   system("pause");
   
 
} // end main




