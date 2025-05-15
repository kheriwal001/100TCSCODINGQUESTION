#include<bits/stdc++.h>
using namespace std;
int decimalToBinary(int n){
    int sum = 0;
    int place = 1;
    while(n){
        int d = n%2;
        sum = d*place + sum;
        place *= 10;
        n /=2;
    }

    return sum;
}

int toggle(int num){
    int sum = 0;
    int place = 1;
    while(num){
        int d = num%10;
        if(d == 1)
        {
            d =0;
        } 
        else if(d == 0) {
            d = 1;
        }


        sum = d*place + sum;

        place *=10;
        
        num /=10;
    }

    return sum;
}

int main(){
    int n = 9;
    int num = decimalToBinary(n);
    cout<<num<<endl;
    int ans = toggle(num);
    cout<<ans<<endl;
}