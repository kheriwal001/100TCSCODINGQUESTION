#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; //size of array
    cin>>n;
    vector<int>arr;

    for(int i=0; i<n;i++){
        int k;
        cin>>k;
        arr.push_back(k);
    }

    unordered_map<int,int>freq;
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }


    for(auto it: freq){
        if(it.second%2 == 0){
            cout<<it.first<<" ";
        }
    }
}