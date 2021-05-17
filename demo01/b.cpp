//
// Created by Akie on 2021/5/15.
//
#include<iostream>
using namespace std;
template<class T>
void MySwap(T&a,T&b){
    T temp = a;
    a = b;
    b = temp;
}
template <class T>
void MySort(T arr[],int len){
    //从大到小排序
    for(int i = 0; i < len ;i ++){
        int max = i ;
        for(int j = i +1 ; j < len; j ++){
            if(arr[max] < arr[j]){
                max = j;
            }
        }
        if(max != i){
            MySwap(arr[max],arr[i]);
        }
    }
}
//打印数组的模板
template<class T>
void printArray(T arr[],int len){
    for(int i = 0; i < len; i++){
        cout <<  arr[i] << " " ;
    }
    cout <<endl;
}
void test01(){
    char charArr[] = "badcfe";
    int num = sizeof(charArr) / sizeof(char);
    MySort(charArr,num);
    printArray(charArr,num);
}
int main(){
    test01();
    return 0;
}
