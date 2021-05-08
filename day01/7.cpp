//
// Created by Akie on 2021/4/17.
//
#include<iostream>
using namespace std;
int cnt[10];
int main(){
    for(int i = 0; i < 10; i ++){
        cnt[i] = 2021;
    }
    for(int i = 1; ; i++){
        int t = i;
        while(t){
            int a = t % 10;
            if(cnt[a] > 0) cnt[a] --;
            else break;
            t = t /10;
        }
        if(t){
            cout <<  i - 1;
            break;
        }
    }


    return 0;
}
