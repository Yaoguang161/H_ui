//
// Created by Akie on 2021/5/15.
//
#include<iostream>
using namespace  std;
//类模板
template<class NameType,class AgeType>
class Person{
public:
    Person(NameType name,AgeType age){
        this->m_Name = name;
        this->m_Age = age;
    }
    void showPerson(){
        cout << "name: " << this->m_Name << "age: " <<this->m_Age <<endl;
    }
    NameType m_Name;
    AgeType m_Age;
};
void test01(){
    Person<string,int> p1("孙悟空",999);
    p1.showPerson();
}
void test02(){
    Person<string,int> p("猪八戒",999);
    p.showPerson();
}
int main(){
    test01();
    test02();
    return 0;
}
