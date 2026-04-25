#include<iostream>
#include<vector>
using namespace std;

int main()
{ //1
    vector<int> v;
    cout<< "size: " << v.size() <<endl;
    cout<< "capacity: " << v.capacity() <<endl;
//2
    v.push_back(1);
    cout<< "size: " << v.size() <<endl;
    cout<< "capacity: " << v.capacity() <<endl;
//3
    v.push_back(2);
    cout<< "size: " << v.size() <<endl;
    cout<< "capacity: " << v.capacity() <<endl;
//4
    v.push_back(3);
    cout<< "size: " << v.size() <<endl;
    cout<< "capacity: " << v.capacity() <<endl;
//5
    v.resize(5);
    cout<< "size: " << v.size() <<endl;
    cout<< "capacity: " << v.capacity() <<endl;
//5
    v.resize(10);
    cout<< "size: " << v.size() <<endl;
    cout<< "capacity: " << v.capacity() <<endl;
//6
    v.push_back(8);
    cout<< "size: " << v.size() <<endl;
    cout<< "capacity: " << v.capacity() <<endl;
//7
    v.insert(v.begin()+3,5);
    cout<< "size: " << v.size() <<endl;
    cout<< "capacity: " << v.capacity() <<endl;
//8
    v.pop_back();
    cout<< "size: " << v.size() <<endl;
    cout<< "capacity: " << v.capacity() <<endl;
//9 
    v.pop_back();
    cout<< "size: " << v.size() <<endl;
    cout<< "capacity: " << v.capacity() <<endl;
//10
    v.pop_back();
    cout<< "size: " << v.size() <<endl;
    cout<< "capacity: " << v.capacity() <<endl;
//11
    v.pop_back();
    cout<< "size: " << v.size() <<endl;
    cout<< "capacity: " << v.capacity() <<endl;
    return 0;
}