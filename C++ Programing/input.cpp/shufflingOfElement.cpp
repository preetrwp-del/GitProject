#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"input the size of array: ";
    cin>>n;

    int array[n];
    cout<<"input elements in array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    
    //loop for shuffling elememts
    for(int i=0; i<n; i+=2){
        int temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
    }
    //printing array after shuffling
    cout<<"Shuffled Elements are: "<<endl;
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}