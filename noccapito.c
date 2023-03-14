#include <stdio.h>

int main()
{
    char genere;

    printf("inserisci il tuo genere ");
    scanf("%c" , &genere);

    if (genere == 'm')
    {
        printf("c'hai rcazzo\n");
    }
    else if (genere == 'f')
    {
        printf("gnam\n");
    }
    else if (genere == 'n')
    {
        printf("mmm ok bro\n");
    }
    else 
    {
        printf("ghei\n");
    }


}