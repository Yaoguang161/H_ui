//
// Created by Akie on 2021/5/15.
//
#include<iostream>
using namespace std;
template<class T>
T myAdd02(T a, T b){  //这里不能带&
    return a + b;
}
void test01(){
    int a = 10;
    int b = 20;
    char c = 'c ';  // ascii码 c = 99;
    cout << myAdd02<int>(a,c) << endl;
}
int main(){
    return 0;
}
//结果 109
