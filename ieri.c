#include <stdio.h>
int main()
{
int n;
printf("inserire un numero: ");
scanf("%d", &n);
int array[n];
int i=0;
int x=0;
int maggiore=0;
int minore=0;

while(i<n)
{
printf("inserisci un numero: \n");
scanf( "%d", &x);
if(i==0)
{
    maggiore=x;
    minore=x;
}
i++;
while(x>maggiore)
{
    maggiore=x;
}
while(x<minore)
{
    minore=x;
}
}
printf("il maggiore è: %d\n", maggiore);
printf("il minore è: %d\n", minore);




}