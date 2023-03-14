#include <stdio.h>

int main()
{
    int numero;
    printf("età intestatario ");
    scanf("%d", &numero);

if(numero>18 && numero<25)
{
 printf("biglietto metà prezzo\n");
}
else if(numero<5 || numero>90)
{
 printf("ingresso gratuito\n");
}
else
{
 printf("prezzo intero\n");
}
}