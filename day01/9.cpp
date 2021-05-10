//
// Created by Akie on 2021/4/17.
//3417. 砝码称重
#include<iostream>
using namespace  std;
const int  N = 110,M =200020;
int B = M / 2;
int n;
int m;
int w[N];
bool f[N][M];
int main(){
    scanf("%d",&n);
    for(int i = 1 ;i <= n; i++){
        scanf("%d",&w[i]);
        m += w[i];
    }
    f[0][B] = true;
    for(int i = 1; i <= n; i++){
        for(int j = -m; j <= m; j ++){
            f[i][j+B] = f[i-1][j+B];
            if(j-w[i] >= -m) f[i][j+B] |= f[i-1][j-w[i]+B];
            if(j+w[i] <= m)  f[i][j+B] |= f[i-1][j+w[i]+B];
        }
    }
    int res = 0;
    for(int j = 1; j <= m; j ++){
        if(f[n][j+B]) res ++;
    }
    printf("%d",res);
    return 0;
}
