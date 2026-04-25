#include<stdio.h>
void greeting(int n){
    if(n==0) return;
    printf("\nGOOD MORNING :) \nSARANGHAE** \n");
    greeting(n-1);
    return;
}
int main(){
    int n ;
    printf("enter the value for n: ");
    scanf("%d",&n);
    greeting(n);
    return 0;
}