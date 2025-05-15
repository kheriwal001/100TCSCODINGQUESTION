#include<bits/stdc++.h>
using namespace std;
int octalToDecimal(int n){
    int temp = n;
    int place = 1;
    int ans = 0;
    int i=0;
    while(n){
        int d = n%10;
        ans = (pow(8,i)*d)+ans;
        
        i++;
        n = n/10;
    }

    return ans;
}
int decimalToBinary(int n){
    int ans = 0;
    int place = 1;
    while(n){
        int d = n%2;
        ans = (d*place)+ans;
        place *=10;
        n = n/2;
    }

    return ans;
}
int main(){
    int octal = 345;
    int decimal = octalToDecimal(octal);
    int binary = decimalToBinary(decimal);
    cout<<binary<<endl;
}