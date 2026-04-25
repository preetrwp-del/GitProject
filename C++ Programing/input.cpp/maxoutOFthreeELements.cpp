#include<iostream>
using namespace std;
int max(int a , int b, int c){
    if(a>b){ //a is greater
        if(a>c){
            return a;
        }
        else{ // c>a c is greater
            return c;
        }
    }
    else{ //b is greater
        if(b>c){
            return b;
        }
        else {
            return c;
        }

    }
    
}
int max(int x, int y){
    if(x>y){
        return x;
    }
    else return y;
}

int main(){
    int a=2,b=3,c=5;
    int result = max(a,b,c);
    cout<<"maximum out of 3 elements " <<a<<" ,"<<b<<" ,"<<c<<" is :"<<result<<endl;
    int output = max(a,b);
    cout<<"maximum out of 2 elements "<<a<<" ,"<<b<<" is :"<<output;
    return 0;
}