#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1, str2, str3;
    cout<< "enter the first string: "<<endl;
    getline(cin,str1);
    cout<< "enter the second string: "<<endl;
    getline(cin,str2);
    str1+=str2;
    cout<<"concatenated string is: "<<str1;
    return 0;
}