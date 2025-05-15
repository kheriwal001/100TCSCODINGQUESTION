#include<bits/stdc++.h>
using namespace std;
int findDigit(int n){
    int temp = n; 
    int count = 0;
    while(temp>0){
        count++;
        temp = temp/10;
    }
    return count;
}
bool checkArmstrong(int n, int count){
    int temp = n;
    int sum =0;
    while(temp >0){
        int digit = temp%10;
        sum += pow(digit,count);
        temp = temp/10;
    }

    return sum == n;
}
int main(){
    int n = 9475;
    int count = findDigit(n);
    cout<<checkArmstrong(n,count);
}