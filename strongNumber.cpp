#include<bits/stdc++.h>
using namespace std;
int fact(int d){
    int f = 1;
    for(int i=1; i<=d; i++){
        f = f * i;
    }

    return f;
}
int checkStrong(int n){
    int temp = n;
    int sum =0;
    while(temp){
        int d = temp%10;
        sum += fact(d);

        temp = temp/10;
    }

    return n == sum;
}
int main(){
    int n = 145;
    cout<<checkStrong(n);
}