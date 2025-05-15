#include<bits/stdc++.h>
using namespace std;
bool checkPrime(int n){
    int factor=0;
    for(int i=1; i<n/2; i++){
        if(n%i == 0){
            factor++;
        }
    }

    return factor>2;
}
int main(){
    int n =2;
    cout<<checkPrime(n);
}