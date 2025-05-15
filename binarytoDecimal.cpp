#include<bits/stdc++.h>
using namespace std;
int main(){
    string n="111";
    int s = n.size();
    int ans =0;
    int base = 1;
    for(int i = s-1; i>=0; i--){
        if(n[i] == '1'){
            ans += base;
        }
        base *=2;
    }
    cout<<ans;
}