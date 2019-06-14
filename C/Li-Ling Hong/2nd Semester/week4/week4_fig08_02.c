// Practice 1: 8P1.c
// Using functions isdigit, isalpha, isalnum, and isxdigit
#include <stdio.h>
#include <ctype.h>
 
int main( void )
{ 
   char input;
   puts( "Input a Charactor to Check the charactor type : ");
   scanf(" %c", &input);
   printf(" %c %s%s \n", input, 
	  isdigit( input ) ? " is a " : " is not a ", "digit" );

   printf( "%c %s%s \n", input,
      isalpha( input ) ? " is a " : " is not a ", "letter" );

   printf( "%c %s%s \n", input,
      isalnum( input ) ? " is a " : " is not a ", "digit or a letter");

   printf( "%c %s%s \n", input,
      isxdigit( input ) ? " is a " : " is not a ", "hexadecimal digit");
   system("pause");
} // end main



