#include<bits/stdc++.h>
using namespace std;
bool checkPrime(int n){
    int count =0;
    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
            count++;
            if(n/i != i){
                count++;
            }
        }
    }
    return count<=2;
}
int main(){
    int min = 2;
    int max = 10;
    for(int i =min; i<max; i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }
}