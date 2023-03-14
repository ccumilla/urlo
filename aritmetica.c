#include <stdio.h>

int main()
{
int x;
int y;
int z;
printf("inserisci 3 numeri");
scanf("%d %d %d", &x, &y, &z);

if(z-y==y-x)
{
    printf("successione aritmetica\n");
}
else
{
    printf("nope\n");
}

}