#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x= 4;

    for(int i =0; i<8; i++){
        int count = 0;
        if (arr[i]>x) count ++ ;
    } 
    printf("%d\n",count);
    return 0; 
}