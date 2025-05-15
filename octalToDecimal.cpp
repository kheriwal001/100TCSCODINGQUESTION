#include<bits/stdc++.h>
using namespace std;
int octalToDecimal(int n){
    int ans =0;
    int i =0;
    while(n){
        int d = n%10;
        ans += d*pow(8,i);
        i++;
        n /=10;
    }
    return ans;
}
int main(){
    int n = 345;
    cout<<octalToDecimal(n);
}