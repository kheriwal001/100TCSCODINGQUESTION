#include<bits/stdc++.h>
using namespace std;
void replaceByRank(vector<int>&arr,vector<int>&arr2, int n){
    unordered_map<int,int> mp;

    sort(arr2.begin(),arr2.end());

    for(int i=0; i<n; i++){
        if (mp.find(arr2[i]) == mp.end()) {  // Ensure unique rank assignment
            mp[arr2[i]] = i + 1;
        }
    }


    for(int i=0; i<n; i++){
        
        cout<<mp[arr[i]]<<" ";
    
    }
}
int main(){
    vector<int> arr = {20 ,15, 26, 2 , 98 , 6};
    vector<int> arr2=arr;
    int n = arr.size();

    

    replaceByRank(arr,arr2,n);

    

    return 0;
}