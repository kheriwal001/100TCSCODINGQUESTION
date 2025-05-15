#include<bits/stdc++.h>
using namespace std;
int ToBinary(int n){
    int ans = 0;
    int place =1;
    while (n)
    {
        /* code */
        int d = n%2;
        ans += place*d;
        
        place *=10;
        n=n/2;
    }

    return ans;
    
}
int main(){
    int n = 7;
    cout<<ToBinary(n);
}