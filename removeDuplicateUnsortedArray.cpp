#include<bits/stdc++.h>
using namespace std;

void removeDuplicate(int arr[], int n){
    unordered_map<int,int> mp;

    for(int i=0; i<n; i++){
        if(mp.find(arr[i]) == mp.end()){ //check if array element is not present in map
            cout<<arr[i]<<" " ;
            mp[arr[i]]++;   // marking array visited
        }

      
    }
}

// int removeDuplicate(int arr[], int n){
//     unordered_set<int> st;
//     for(int i=0; i<n; i++){
//       st.insert(arr[i]);
//     }

//     int i =0;
//     for(auto it : st){
//         arr[i] = it;
//     }

//     return st.size();
// }
int main(){
    int arr[]={2,3,1,9,3,1,3,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    /*int n2 = */ removeDuplicate(arr,n);

    // for(int i =0; i<n2; i++){
    //     cout<<arr[i];
    // }
}