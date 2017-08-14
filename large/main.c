#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    if((num1>num2)&&(num1>num3))
    {
        printf("num1 is big");
    }
    else
    {
        if(num2>num3)
        {
            printf("num2 is big");
        }
        else
        {
            printf("num3 is big");
        }
    }
    return 0;
}
