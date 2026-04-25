#include<stdio.h>
#include<math.h>
int main(){
    int a; 
    printf("enter a num: ");
    scanf("%d",&a);
    int root = sqrt(a);
    printf("The square root of %d is :%d", a, root);
    return 0;
}