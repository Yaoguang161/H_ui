//
// Created by Akie on 2021/5/17.
//
#include<iostream>
using namespace std;

//通过全局函数   打印Person信息
//提前让编译器知道Person类
template<class T1,class T2>
class Person;

//类外实现
template<class T1,class T2>
void printPerson2(Person<T1,T2> p){
    cout << "类外实现--姓名: " << p.m_Name << "年龄: " << p.m_Age << endl;
}

template<class T1,class T2>

class Person{
    //全局函数 类内实现
    friend void printPerson(Person<T1,T2> p){
        cout << "姓名: " << p.m_Name << "年龄: " << p.m_Age << endl;
    }

    //全局函数 类外实现
    //加空模板的参数列表
    //如果全局函数是类外实现,需要让编译器提前知道这个函数的存在
    friend void printPerson2<>(Person<T1,T2> p);

public:
    Person(T1 name,T2 age){
        this->m_Name = name;
        this->m_Age = age;
    }

private:
    T1 m_Name;
    T2 m_Age;
};
//
////类外实现
//template<class T1,class T2>
//void printPerson2(Person<T1,T2> p){
//    cout << "类外实现--姓名: " << p.m_Name << "年龄: " << p.m_Age << endl;
//}

//1.全局函数在类内的实现
void test01(){
    Person<string,int>p("Tom",20);
    printPerson(p);
}

//2.全局函数在类外实现
void test02(){
    Person<string ,int> p("Jerry",20);
    printPerson2(p);
}

int main(){
    //test01();
    test02();
    return 0;
}
