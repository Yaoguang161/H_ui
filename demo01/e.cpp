//
// Created by Akie on 2021/5/15.
//
#include<iostream>
using namespace std;
template <class T>
bool myCompare(T &a,T &b){
    if(a==b){
        return true;
    }else{
        return false;
    }
}
void test01(){
    int a = 10;
    int b = 20;
    bool ret = myCompare(a,b);
    if(ret){
        cout << "两个值相等" << endl;
    }else{
        cout << "两个值不相等" << endl;
    }
}
int main(){
    test01();

    return 0;
}
