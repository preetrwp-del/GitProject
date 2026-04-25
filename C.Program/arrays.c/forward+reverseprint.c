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
    printf("\n %d",array[i]);
    }

    for(int i=5; i>=0; i--)
    {
    printf("\n %d",array[i]);    
    }

    return 0;
}