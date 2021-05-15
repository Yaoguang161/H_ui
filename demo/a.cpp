//
// Created by Akie on 2021/5/15.
//
#include<iostream>
using namespace  std;

template<class T>
void MySwap(T &a,T &b){
    T temp = a;
         a = b;
         b = temp;
}
void test01(){
    int a = 10;
    int b = 20;
    //1.自动类型推导
    MySwap(a,b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    char c = 'c';
    //MySwap(a,c)   错误! 推导不出一致的函数类型
}
template<class T>
void  func(){
    cout << "func 调用" << endl;
}

int main(){

    test01();
    func<int>();

    return 0;
}