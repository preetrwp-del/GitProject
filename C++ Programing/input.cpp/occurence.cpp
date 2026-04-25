#include<iostream>
using namespace std;
int frequency_of_key(int a[], int x, int n ){
    int count =0;
    for(int i=0; i<n; i++){
        if(a[i]==x){
            count++;
        }
    }
    return count;
}
int main(){
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;
    
    int arr[size];
    cout<<endl<<"Enter elements "<<size<<" in an array "<<endl;
    for(int i=0 ; i<size; i++){
        cin>>arr[i];
    }

    int key;
    cout<<endl<<"Enter the key element you want to search : ";
    cin>>key;
    
    int no_OF_elements;
    cout<<endl<<"Enter the no. of elements from which you want to search key element : ";
    cin>>no_OF_elements;

    int result = frequency_of_key(arr , key , no_OF_elements);
    cout<<endl<<"The frequency of "<<key<<" in the given array till " << no_OF_elements<< " index is : "<< result;

    return 0;
}