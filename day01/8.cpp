//
// Created by Akie on 2021/4/17.
//
#include<bits/stdc++.h>
using namespace std;
int s[10];
bool checek(int x){
    while(x){
        int t = x%10;
        x /= 10;
        if(--s[t] < 0)  return false;
    }
    return true;
}
int main(){
    for(int i = 0; i < 10; i++) s[i] = 2021;
    for(int i = 0 ; ; i++){
        if(!check(i)){
            cout << i - 1 << endl;
        }
    }

    return 0 ;
}
