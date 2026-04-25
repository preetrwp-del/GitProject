#include<iostream>
using namespace std;
void sWAP(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int num1,num2;
    cout<<"enter number: ";
    cin>>num1>>num2;
    cout<<"numbers before swaping is "<<num1<<" and "<<num2;
    cout<<endl;
    sWAP(num1 , num2);
    cout<<"numbers after swaping is "<<num1<<" and "<<num2;
    cout<<endl;
    Swap(&num1 , &num2);
    cout<<"numbers after 2nd swap again is "<<num1<<" and "<<num2;
    cout<<endl; 
    swap(num1 , num2);
    cout<<"numbers after 3rd swap is "<<num1<<" and "<<num2;
    cout<<endl; 
    return 0;
}