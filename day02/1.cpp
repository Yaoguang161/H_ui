//
// Created by Akie on 2021/5/10.
//
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N =10010;
int n,m;
int a[N];
int main(){
    scanf("%d%d",n,m);
    for(int i = 0 ; i < n;i ++){
        scanf("%d",a[i]);
    }
    for(int i = 0;i<n;i++){
        int res = 0;
        for(int j = i ; j < n;j++){
            a[i] ^= a[j];
            if()
        }
    }
    return 0;
}