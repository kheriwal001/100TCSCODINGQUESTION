#include<bits/stdc++.h>
using namespace std;
bool solve(int n){
    if((n&1) == 0){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int n = 39;
    if(solve(n) == 0){
        cout<<"Even";
    }else{
        cout<<"odd";
    }
}