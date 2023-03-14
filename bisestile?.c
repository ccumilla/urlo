#include <stdio.h>

int main()
{
    int anno;
    printf("inserire anno");
    scanf("%d", &anno);

    if(anno%4 == 0 || anno%400 ==0 )
    {
        printf("bisestile!!\n");
    }
    else
    {
        printf("no 29 febbraio ez\n");
    }


}