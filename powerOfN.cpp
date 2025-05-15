#include<bits/stdc++.h>
using namespace std;
int pow(int n, int x){
    int origN = n;
    int ans = 1;
    while(n){
        if(n%2 == 1){
            ans = ans*x;
            n = n-1;
        }else{
            n = n/2;
            x = x*x;

        }
    }
    return ans;
}
int main(){
	//x^n
    double x = 2;
    int n = 4;
    cout<<pow(2,4);
}