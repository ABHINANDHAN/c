#include<stdio.h>
void main()
{
    int b;
    scanf("%d",&b);
    if(b%4==0)
    printf("%b is leap year",b);
    else
    printf("%b is not leap year",b);
}
