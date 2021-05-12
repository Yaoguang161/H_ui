//
// Created by Akie on 2021/5/10.
//归并排序
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int tmp[100];
int q[100];
void merge_sort(int q[], int l, int r)
{
    if (l >= r) return;

    int mid = l + r >> 1;
    merge_sort(q, l, mid);
    merge_sort(q, mid + 1, r);

    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r)
        if (q[i] <= q[j]) tmp[k ++ ] = q[i ++ ];
        else tmp[k ++ ] = q[j ++ ];

    while (i <= mid) tmp[k ++ ] = q[i ++ ];
    while (j <= r) tmp[k ++ ] = q[j ++ ];

    for (i = l, j = 0; i <= r; i ++, j ++ ) q[i] = tmp[j];
}
int main(){
    for(int i = 0 ; i < 10; i++){
        scanf("%d",&q[i]);
    }
   merge_sort(q,0,9);
    for(int i = 0;i < 10; i++){
        printf("%d",q[i]);
    }
    return 0;
}
//输入9 8 7 6 5 4 3 2 1 10
//输出12345678910