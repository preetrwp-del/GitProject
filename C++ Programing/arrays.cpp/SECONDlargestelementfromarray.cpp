#include<iostream>
#include<cmath>
using namespace std;
int second_largest_element(int arr[], int num)
{
    int max =  arr[0] ;
    int SEC_max = arr[0] ;
    for(int i=0; i<num; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0; i<num; i++){
        if((arr[i]>SEC_max)&&(arr[i]!=max)){
                SEC_max=arr[i];
        }
    }
    return SEC_max;
}
int main(){
    int num; 
    cout<<"enter the size of an array: ";
    cin>>num;
    int arr[num];
    cout<<"enter elements in array: ";
    for (int i=0; i<num; i++){
        cin>>arr[i];
    }
    cout<<endl<<"entered elements are: "<<endl;
    for (int i=0; i<num; i++){
        cout<<arr[i];
        cout<<endl;
    }
    cout<<endl;
    int result= second_largest_element(arr , num);
    cout<<"the second largest element from array: "<<result<<endl; 

    return 0;
}