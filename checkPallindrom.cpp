#include<bits/stdc++.h>
using namespace std;
bool checkPallindrome(int n){
    int temp = n;
    int dummyN = 0;
    while(temp>0){
        int digit = temp %10;
        dummyN = dummyN*10 + digit;
        temp= temp/10;
    }

    return dummyN == n;
}
int main(){
    int n = 4554;
    cout<<checkPallindrome(n);
}