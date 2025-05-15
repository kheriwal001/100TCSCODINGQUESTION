#include<bits/stdc++.h>
using namespace std;


int  findSum(int l, int r){
    //sum from 1 to r minus sum from 1 to l-1
    int sum = (r*(r+1))/2 - (((l)*(l-1))/2);
    return sum;
}
int main(){
    int l = 2;
    int r = 7;
    cout<<findSum(l,r)<<endl;
    int sum =0;
    for(int i=l ; i<=r; i++){
        sum +=i;
    }

    cout<<sum;
}