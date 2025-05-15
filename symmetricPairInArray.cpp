#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     //int first = arr[i][0];
    //     //int second = arr[i][1];

    //     for(int j=i+1; j<n; j++){
    //         if(arr[j][0] == arr[i][1] && arr[j][1] == arr[i][0]){
    //             cout<<arr[i][1]<<" "<<arr[i][0]<<endl;
    //             break;
    //         }

            
    //     }
    // }


    //TC :- O(n)
    unordered_map<int,int> mp;

    for(int i=0; i<n; i++){
        
        if((mp.find(arr[i][1]) != mp.end()) && mp[arr[i][1]]==arr[i][0]){
            cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
        }

        mp[arr[i][0]] = arr[i][1];
    }
    
}