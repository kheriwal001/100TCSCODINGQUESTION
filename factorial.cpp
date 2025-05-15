#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n == 1){
        return 1;
    }

    return n *factorial(n-1);
}
int main(){
    int n = 6;

    int fact = 1;
    for(int i =1; i<=n; i++){
        fact = fact*i;
    }

    cout<<fact;

    cout<<endl;
    cout<<factorial(n);
}