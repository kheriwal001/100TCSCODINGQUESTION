#include<bits/stdc++.h>
using namespace std;
int decimalToOctal(int n){
    int ans = 0;
    int place = 1;
    while(n){
        int d = n%8;
        ans+= d*place;
        place *= 10;
        
        n = n/8;
    }

    return ans;
}
int main(){
    int n = 136;
    cout<<decimalToOctal(n)<<endl;
}