#include<stdio.h>
int main (){
    int marks[10]= {21,35,68,8,75,13,64,90,99,10};

    for(int i=0; i<=9; i++){
        if(marks[i]<37)
        printf("%d\n",marks[i]);
    }
    return 0;
}