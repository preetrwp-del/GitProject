#include<stdio.h>
int power(int a, int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main (){
    int a,b,power;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("\nEnter the value of b: ");
    scanf("%d",&b);
    power=pow(a,b);
    printf("\nThe solution when %d is raised to power %d is:%d ",a,b,power);
    return 0;
}