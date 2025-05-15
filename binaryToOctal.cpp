#include<bits/stdc++.h>
using namespace std;
int binaryToOctal(int n){
    int ans = 0;
    int i =0;
    while(n){
        int d = n%10;
        ans += d*pow(2,i);

        i++;

        n /=10;
    }

    return ans;
}

int decimalToOctal(int n){
    int ans = 0;
    int place = 1;
    while(n){
        int d = n%8;
        ans = (d*place)+ans;
        place *=10;
        n /=8;
    }

    return ans;
}
int main(){
    int n = 1100110;
    int d = binaryToOctal(n);
    cout<<decimalToOctal(d);
}