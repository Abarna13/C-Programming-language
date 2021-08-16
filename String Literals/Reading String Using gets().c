//But gets function is unsafe because it will try to write the characters beyond the memory allocated to the character array which is unsafe because it will simply overwrite the memory beyond the memory allocated to the character array.


#include <stdio.h>

int main ()
{
   char str[50];

   printf("Enter a string : ");
   gets(str);
   printf("You entered: %s", str);

   return(0);
}
