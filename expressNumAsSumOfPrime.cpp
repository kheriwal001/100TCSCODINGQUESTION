#include<bits/stdc++.h>
using namespace std;
bool checkPrime(int n){
    if(n<2) return false;
    for(int i =2; i*i<=n; i++){

        if(n%i == 0){
           return false;
        }
    }
       
    return true;

 }

  



void sumofPrime(int n){
    
    for(int i =2; i<n; i++){
        if(checkPrime(i)  && checkPrime(n-i)){
            cout<<i<<" "<<(n-i)<<endl;
            return;
        }
    }

   
}
int main(){
    int n = 9;
    sumofPrime(n);
}