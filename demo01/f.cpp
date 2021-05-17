//
// Created by Akie on 2021/5/15.
//
//模板的通用性并不是万能的
//如果传入的a和b是一个数组,就无法实现了
#include<iostream>
using namespace std;
class Persion{
public:
    Persion(string name,int age){
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};
template <class T>
bool myCompare(T &a,T &b){
    if(a==b){
        return true;
    }else{
        return false;
    }
}
//利用具体化的Persion的版本实现代码,具体化优先调用
template<> bool myCompare(Persion &p1,Persion &p2){
    if(p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age){
        return true;
    } else{
        return false;
    }
}

void test02(){
    Persion p1("Tom",10);
    Persion p2("Tom",10);
    bool ret = myCompare(p1,p2);
    if(ret){
        cout << "p1 == p2" << endl;
    }else{
        cout << "p1 != p2" <<endl;
    }
}
int main(){
    test02();
    return 0;
}
