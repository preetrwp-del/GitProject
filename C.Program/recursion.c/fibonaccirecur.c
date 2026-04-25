#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main (){
    int n;
    printf("enter the number you want from fibonacci series: ");
    scanf("%d",&n);
    int x = fibo(n);
    printf("the %d th fibonacci term is %d ",n,x);
    return 0;
}