//
// Created by Akie on 2021/4/17.
//3417. 砝码称重
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 110, M = 2e5+10;
int n;
int sum;
int w[N];
bool f[N][M];
int main(){
    scanf("%d",&n);
    for(int i = 1; i <= n; i ++){
        scanf("%d",&w[i]);
        sum += w[i];
    }
    f[0][0] = true;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= sum; j ++){
            f[i][j] = f[i-1][j]||f[i-1][j+w[i]] ||f[i-1][abs(j-w[i])];
        }
    }
    int ans= 0;
    for(int i = 1 ; i <=sum; i++){
        if(f[n][i]) ans ++;
    }
    cout <<ans;
    return 0;
}