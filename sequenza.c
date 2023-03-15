#include <stdio.h>
int main()
{
float x=0;
float y=0;
float z;
int g=0;

while(x>=0)
{
    printf("inserisci un numero ");
scanf("%f", &x);
g=g+1;
y= x + y;

z=(y)/g;

if( x>0 && y>0)
{
printf("la media è: %f\n ", z);
}
else 
{
    printf("muori\n");
}
}
}