#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,count=0,i,n;
    scanf("%d",&num);
    while(num!=0)
    {
        n=num%10;
        count++;
        num=num/10;
    }
    printf("%d",count);
    return 0;
}
