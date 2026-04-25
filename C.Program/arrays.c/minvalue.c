#include<stdio.h>
#include<limits.h>
int main(){
    int array[7]={111,34,42,28,19,15,12};
    int min= INT_MAX;
    for(int i=0; i<7; i++){
        if(min>array[i]){
            min=array[i];
        }}
 printf("%d",min);
 return 0;
}