//
// Created by Akie on 2021/4/17.
//
#include<bits/stdc++.h>
typedef long long LL;
using namespace std;
const int  N = 100010;
int n;
int a[N];
int main(){
    cin >> n ;
    for( int i = 1; i <= n ; i ++){
        cin >> a[i];
    }
    LL maxs= -1e18;
    int depth = 0;
    for(int d = 1,i = 1; i <= n; i *=2 ,d ++ ){
        LL s = 0 ;
        for( int j = i ; j < i + (1 << d - 1) && j <= n; j++){
            s +=a[j];
        }
        if( s > maxs){
            maxs = s;
            depth  = d;
        }
    }
    printf("%d \n",depth);


    return 0;
}