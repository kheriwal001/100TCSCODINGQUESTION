#include<bits/stdc++.h>
using namespace std;
//a = bhag hone vala   b bhag krne vala 
int __gcd(int a, int b){
    if(b==0){
        return a;
    }

    __gcd(b,a%b);
}

void simple(int &num3, int &den3){
    int x = __gcd(num3,den3);

    num3 /=x;
    den3 /=x;
}
int main(){
    int num1 = 3;
    int den1 = 4;

    int num2 = 5;
    int den2 = 6;

    int lcm = (den1*den2)/(__gcd(den1,den2));

    int den3 = lcm;
    int num3 = (num1*(den3/den1)) + (num2*(den3/den2));
    simple(num3,den3);
    cout<<num3<<"/"<<den3<<endl;
}