#include<stdio.h>
int main()
{
    int i,a,b=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=b+i;
    }
    printf("%d",b);
}