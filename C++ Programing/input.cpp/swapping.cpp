#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    int c = b;
    b=a;
    a=c;
    cout<<"the value of a after swapping: "<<a<<endl;
    cout<<"the value of b after swapping: "<<b<<endl;
    return 0;
}