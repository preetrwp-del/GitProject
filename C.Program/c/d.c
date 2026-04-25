#include <stdio.h>
int main()
{
    int x,y;
    printf("enter the first element: ");
    scanf("%d", &x);
    printf("enter the second element: ");
    scanf("%d", &y);
    int sum=x+y;
    printf("sum of the numbers you entered is %d",sum);
    return 0;
}