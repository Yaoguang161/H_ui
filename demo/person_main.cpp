//
// Created by Akie on 2021/5/16.
//
#include<iostream>
using namespace std;

//第一种解决方法
#include "person.cpp"

void test01(){
    Person<string,int> p("Jerry",18);
    p.showPerson();
}
int main(){
    test01();

    return 0;
}
