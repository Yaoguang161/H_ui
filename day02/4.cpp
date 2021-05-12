//
// Created by Akie on 2021/5/10.
//89. a^b mod p
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a,b,p;
int power(int a , int b, int p){
    int ans = 1 % p;
    while(b){
        if(b & 1){
            ans = ans * a % p ;
        }
        a = a * a % p;
        b >>= 1;
    }
    return ans;
}
int main(){
    scanf("%d %d %d",&a,&b,&p);
    printf("%d", power(a,b,p));
    return 0;
}
