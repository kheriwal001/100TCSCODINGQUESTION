#include<bits/stdc++.h>
using namespace std;
int checkHarshed(int n){
    int sum =0;
    int temp =n;
    while(n){
        sum += n%10;
        n= n/10;
    }

    return temp%sum == 0;
}
int main(){
    int n = 378;
    cout<<checkHarshed(n);
}