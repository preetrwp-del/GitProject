#include<stdio.h>
int sum (int n){
    if(n==1 || n==0) return 1;
    int recans= n+sum(n-1);
    return recans;
}
int main(){
    int n;
    printf("enter the value for n:  ");
    scanf("%d",&n);
    int s= sum(n);
    printf("\nthe sum of first %d natural numbers is : %d",n,s);
    return 0;
}