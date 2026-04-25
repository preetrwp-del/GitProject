#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,3,2,4,6,0};
    int size= 6
    int targett_Sum = 6;
    int triplets= 0;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            for(int k=j+1; k<size; k++){
                if((arr[i]+arr[j]+arr[k]) == targett_Sum){
                    triplets++;
                }
            }
        }
    }
    return 0;
}