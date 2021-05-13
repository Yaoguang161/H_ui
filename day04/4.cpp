//
// Created by Akie on 2021/5/12.
//
//AcWing 790. 数的三次方根
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    double x;
    scanf("%d",&x);
    double l = - 100, r = 100;
    while(r - l > 1e-8){
        double mid = (l + r) / 2;
        if(mid * mid * mid >= x) r = mid;
        else l = mid;
    }
    printf("%.6lf\n",l);
    return 0;
}

