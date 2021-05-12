//
// Created by Akie on 2021/5/12.
//快速排序模板
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N = 100010;
int a[N];
void quick_sort(int q[],int l , int r){
    if(l >= r) return ;
    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while( i < j ){
        do i ++ ; while(q[i] < x);
        do j --; while(q[j] > x);
        if(i < j ) swap(q[i] , q[j]);
    }
    quick_sort(q,l,j),quick_sort(q,j+1,r);
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i < n; i++){
        scanf("%d",&a[i]);
    }
    quick_sort(a,0,n-1);
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}


