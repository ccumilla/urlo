#include <stdio.h>
int main()
{
char stringa[]="";
   printf("scrivi  roba a cazzo: ");
   scanf(" %s", stringa);
int i=0;

   while( stringa[i] != '\0')
  {
  i++;
    
  }
  while( i>=0)
  {
    printf(" %c\n", stringa[i]);
    i--;
  }
  
}