#include<stdio.h>
int main()
{ 
    int a,b,c;
    printf("enter the cofficients of a b and c respectively: ");
    scanf("%d %d %d",&a,&b,&c);
    print quadratic equation(a,b,c);
    if(a==1){
        printf("x^2");
    }
         else if(a==-1){
        printf("-x^2");
        }
    else{
        printf("%dx^2",a);
    }
    if(b>0){
        if(b==1)
        printf("+x");
        else printf("+%dx",b);
    }
    if(b<0){
        if(b==-1)
        printf("-x");
        else printf("-%dx",b);
    }
    if(c>0){
        printf("+%d",c);
    }
    else if(c>0){
        printf("-%d",c);

    }
    return 0;
}