//
// Created by Akie on 2021/4/17.
//
#include <iostream>
using namespace std;
int main(){
    int cnt[10];
    for(int i = 0; i < 10 ; i ++)
        cnt[i]=2021;
    for(int i = 1; ; i++){
        int t = i;
        while(t){
            int a = t %10;
            if(cnt[a]>0) cnt[a] --;
            else break;
            t /= 10;
        }
        if(t){
            cout << i - 1 <<endl;
            break;
        }
    }
    return 0 ;
}
