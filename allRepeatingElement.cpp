#include<bits/stdc++.h>
using namespace std;
void allRepeating(int arr[], int n){
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    for(auto it : mp){
        if(it.second>1){
            cout<<it.first<<" ";
        }
    }
}
int main(){
    int arr[]= {1,2,-1,1,3,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    allRepeating(arr,n);
}