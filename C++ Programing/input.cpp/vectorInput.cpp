#include<iostream>
#include<vector>
using namespace std;
void remove(vector<int> &a, int item){
    vector<int> result;
    for(int i=0; i<a.size(); i++){
        if(a[i]!=item){
            result.push_back(a[i]);
        }
    }
    a = result;
}
int main(){
    vector<int> a;
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;

    cout<<"enter the elements: ";
    for(int i=0; i<size; i++){
        int val;
        cin>>val;
        a.push_back(val);
    }
   
    int item;
    cout<<"Enter element you want to remove";
    cin>>item;

    remove(a,item);

    cout<<"final array:\n";
    for(int val: a){
        cout<<val<<" ";
    }

    return 0;
}