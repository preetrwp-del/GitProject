#include <stdio.h>
int main ()
{
    int a,b;
    printf("enter the 1st number: ");
    scanf("%d", &a);
    printf("enter the 2nd number: ");
    scanf("%d", &b);
    int r = a%b;
    printf("the remainder is:%d",r);
    return 0;
}