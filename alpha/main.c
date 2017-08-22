#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter ;
    int ascii;
    scanf("%c",&letter);
    ascii=(int)letter;
    if (ascii>=64&&ascii<=112)
    {
        printf("is an alphabet");
    }
    else
    {
        printf("is an consonant");
    }
    return 0;
}
