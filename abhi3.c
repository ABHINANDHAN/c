#include<stdio.h>
void main()
{
    char b;
    printf("enter a character:");
    scanf("%b",&b);
    if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u'||b=='A'||b=='E'||b=='I'||b=='O'||b=='U')
    printf("%b is vowel",b);
    else
    printf("%b is consonant",b);
} 
