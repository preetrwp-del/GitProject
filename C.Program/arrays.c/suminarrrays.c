#include<stdio.h>
int main (){
    int array[6];
    for(int i=0; i<=5; i++)
    {
    printf("enter the elements %d\t",i+1);
    scanf("%d",&array[i]);
    }

    for(int i=0; i<=5; i++)
    {
    printf("\t %d",array[i]);
    }

    int sum= 0;
    for(int i=0; i<=5; i++)
    {
     sum=sum+array[i];
    }
    printf("\nsum is %d",sum);

    return 0;
}