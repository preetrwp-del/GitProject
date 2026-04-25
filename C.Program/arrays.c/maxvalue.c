#include<stdio.h>
#include<limits.h>
int main()
{
 int array[5]={15,3,5,18,19};
 int max = INT_MIN;
 for(int i=0; i<5; i++){
    if(max<array[i]){
        max=array[i];
    }
 }
    printf("%d",max);
    return 0;
}