#include <stdio.h>

int main()
{
int anno;
printf("in che anno sei nato");
scanf("%d", &anno);
int x=1969-anno;
int y=anno-1969;


if(anno==1969)
{
    printf("sbarco sulla luna!! yuppi\n");
}
else if(anno<1969)
{

    printf("uo sei nato %d anni prima dello sbarco sulla luna\n", x);
}
else
{
    printf("sei nato %d anni dopo lo sbarco sulla luna\n", y);
}

}