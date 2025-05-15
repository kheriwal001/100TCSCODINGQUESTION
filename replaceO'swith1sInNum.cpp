#include<bits/stdc++.h>
using namespace std;
int replaceZerosWithOne(int n){
    int ans = 0;
    int place =1;
    while(n){
        int d = n%10;
        if(d == 0){
            d = 1;
        }

        ans = d*place+ans;
        place *=10;
        n /=10;
    }
    

    return ans;
}
int main(){
    int n = 102003;
    cout<<replaceZerosWithOne(n);
}