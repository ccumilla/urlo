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