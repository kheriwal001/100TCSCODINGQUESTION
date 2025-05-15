#include<bits/stdc++.h>
using namespace std;
void factor(vector<int>&v, int n){
    for(int i =1; i*i <=n; i++){
        if(n%i ==0){
            v.push_back(i);
            if(n/i != i  && n / i != n){
                v.push_back(n/i);
            }
        }
    }
}
bool checkAbundant(int n){
    vector<int> v;
    factor(v,n);
    int sum =0;
    for(int i=0; i<v.size(); i++){
        sum += v[i];

    }

    return sum >n;
}
int main(){
    int n = 6;
    cout<<checkAbundant(n);
}

