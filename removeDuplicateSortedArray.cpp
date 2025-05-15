#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> removeDuplicate(int arr[], int n){
    vector<pair<int,int>> arr1;
    unordered_set<int> vis;
   
    for(int i =0; i<n; i++){
        if(vis.find(arr[i]) == vis.end()){
           arr1.push_back({arr[i],1});
           vis.insert(arr[i]);

        }
    }

    return  arr1 ;
}
// int removeDuplicate(int arr[], int n){
//     int i=0;
//     for(int j=1; j<n; j++){
//         if(arr[i] != arr[j]){
//             i++;
//             arr[i] = arr[j];
//         }
//     }

//     return i+1;
// }

int main(){
    int arr[] ={1,1,2,2,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<pair<int,int>> arr2 = removeDuplicate(arr,n);

    for(auto it : arr2){
        cout<<it.first<<" ";
    }
}