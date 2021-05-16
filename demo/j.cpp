//
// Created by Akie on 2021/5/15.
//
#include<iostream>
using namespace std;
//类模板与继承
template<class T>
class Base{
    T m;
};
//class Son: public Base{  //错误
class Son: public Base<int>{

};
void test01(){
    Son s1;
}
//如果像灵活指定父类中T类型,子类也需要类变模板
template<class T1,class T2>
class Son2: public Base<T2>{
public:
    Son2(){
        cout <<"T1的数据类型为:" <<typeid(T1).name()<< endl;
        cout <<"T2的数据类型为:" <<typeid(T2).name()<< endl;
    }
    T1 obj;
};
void test2(){
    Son2<int,char>S2;
}
int main(){
    test2();

    return 0;
}
