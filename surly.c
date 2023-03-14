#include <stdio.h>
int main()
{
  int x;
  int y;
  int z;

  printf("inserire valori");
  scanf("%d %d %d", &x, &y, &z);

  if(x+y > z && x+z > y && y+z > x)
  {
   printf("triangolo verificato\n");

   if(x==y && x==z)
   {
    printf("equilatero\n");
   }
   else if((x==y && x!=z) || (x==z && x!=y) || (y==z && y!=x))
   {
    printf("isoscele\n");
   }
   else
   {
    printf("scaleno\n");
   }


  }
  else if(x == 0 || y == 0 || z == 0)
  {
   printf("triangolo degenere\n");
  }
  else
   {
    printf("triangolo non verificato\n");
   }

}