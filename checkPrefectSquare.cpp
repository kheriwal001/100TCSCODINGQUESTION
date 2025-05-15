#include<bits/stdc++.h>
using namespace std;
bool checkPerfectSquare(int n){
    int sum = 1;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            sum +=i;
            if(n/i != i){
                sum += n/i;
            }
        }
    }

    return sum == n;
}
int main(){
    int n = 6;
    cout<<checkPerfectSquare(n);
}
