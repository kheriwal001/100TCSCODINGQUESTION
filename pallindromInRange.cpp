#include<bits/stdc++.h>
using namespace std;
bool checkPallindrom(int n){
    int temp =n;
    int dummyN = 0;
    while(temp>0){
        int digit = temp%10;
        dummyN = dummyN*10+digit;

        temp = temp/10;
    }

    return dummyN == n;
}
int main(){


    int min = 10;
    int max = 50;
    for(int i=min; i<= max; i++){
        if(checkPallindrom(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}