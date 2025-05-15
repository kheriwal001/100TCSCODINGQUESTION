#include<bits/stdc++.h>
using namespace std;
void reverse(int n){
    int revn= 0;
    while(n>0){
        int digit = n%10;
        revn = revn*10 + digit;
        n = n/10;
    }

    cout<<revn;
}
int main(){
    int n = 243;

    reverse(n);
}