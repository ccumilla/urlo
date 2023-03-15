#include <stdio.h>
int main()
{
    int n;

    printf("inserire numero ");
    scanf("%d", &n);
    
    int array[n];
    int i=0;
    int x=0;
    int y;
    while(i<n)
    {
      while(y<x && x%y!=0)
      {
      y++;
      }
      if(y==x)
      {
        array[i]= x;
        y=2;
        i++;
      }
      x++;}
      i=0;
      while(i<n)
      {printf("%d\n", array[i]);
      i++;
      }
      
    }
