#include<bits/stdc++.h>
using namespace std;
void findFactor(int n, vector<int>&v){
    for(int i=1; i*i<=n; i++){
        if(n%i ==0){
            v.push_back(i);
            if(n/i != i){
                v.push_back(n/i);
            }
        }
    }
}
int main(){

    int n = 6;
    vector<int>v;
    findFactor(n,v);

    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<" ";
    }
    
}