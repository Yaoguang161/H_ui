//
// Created by Akie on 2021/5/15.
//
#include<iostream>
using namespace std;
//这里是普通模板
void myPrint(int a, int b){
    cout << "调用普通函数" << endl;
}
template <class T>
void myPrint(T a, T b){
    cout << "调用函数模板" << endl;
}
template <class T>
void myPrint(T a, T b,T c){
    cout << "调用重载的函数模板" << endl;
}
void test01(){
    int a = 10;
    int b = 20;
    //使用空模板参数列表,强制调用函数模板.
    myPrint<>(a,b);
    //使用重载的函数模板
    myPrint(a,b,100);
    //如果函数模板产生更好的匹配,优先调用函数模板
}
int main(){
    test01();

    return 0;
}
