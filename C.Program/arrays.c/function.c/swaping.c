#include<stdio.h>
void swap(int *x, int *y){
    int temp;
    temp= *x;
    *x = *y;
    *y = temp;
    return;
}

int main(){
    int a,b; 
    printf("enter a num1: ");
    scanf("%d",&a);
    printf("enter a num2: ");
    scanf("%d",&b);
    
    swap(&a,&b);

    printf("the value of a is %d\n",a);
    printf("the value of b is %d\n",b);
    return 0;
}