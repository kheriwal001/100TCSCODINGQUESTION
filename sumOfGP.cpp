#include<bits/stdc++.h>
using namespace std;
int sumOfGP(int a, int r , int n){
    int sum = 0;
    if(r<1){
        sum = a*(1-pow(r,n))/(1-r);
    }else{
        sum =  a* (pow(r,n)-1)/(r-1);
    }
    return sum;
}
// int sumOfGP(int a, int r , int n){
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum +=a;
//         a = a*r;
//     }
//     return sum;
// }
int main(){
    float a=2;
    float r=2;
    int n =4;
    cout<<sumOfGP(a,r,n);
}