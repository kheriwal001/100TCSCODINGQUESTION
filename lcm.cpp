#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1 = 17;
    int n2 =7;
    int gcd = 1;
    for(int i=1; i<= min(n1,n2); i++){
        if(n1%i==0 && n2%i==0){
            gcd =i;
        }
    }
    int lcm = (n1*n2)/gcd;

    cout<< lcm;
}