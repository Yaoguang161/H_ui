//
// Created by Akie on 2021/5/12.
//二分789. 数的范围
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N  = 100010;
int q[N];
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i = 0; i < n  ; i ++){
        scanf("%d",&q[i]);
    }
    while(m--){
        int x;
        scanf("%d",&x);
        int l = 0 , r = n - 1;
        while(l < r){
            int mid = l + r >> 1;
            if(q[mid] >= x)  r =mid;
            else l = mid + 1;
        }
        if(q[l] != x) printf("-1 -1\n");
        else{
            printf("%d ",l);
            int l = 0 , r =  n - 1;
            while(l < r){
                int mid = l + r + 1 >> 1;
                if(q[mid] <= x)  l = mid;
                else   r = mid -1;
            }
            printf("%d \n",l);
        }

    }
    return 0;
}

