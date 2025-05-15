#include<bits/stdc++.h>
using namespace std;

// int sumBefore(int arr[], int f, int l){
//     if(f == l){
//         return 0;
//     }

//     int sum =0;
//     for(int i=f; i<l; i++){
//         sum +=arr[i];
//     }

//     return sum;
// }

// int sumAfter(int arr[], int l, int r){
//     if(l == r) return 0;

//     int sum =0;
//     for(int i=l; i<r; i++){
//         sum +=arr[i];
//     }

//     return sum;
// }
// int findEquilibrium(int arr[], int n){

//     for(int i=0; i<n; i++){
//         int x = sumBefore(arr,0,i);
//         int y = sumAfter(arr,i+1,n);
        
//         if(x==y) return i;
//     }

//     return -1;
// }

int findEquilibrium(int arr[], int n){
    int leftSum =0;
    int totalSum = 0;
    for(int i=0; i<n; i++){
        totalSum +=arr[i];
    }

    int rightSum =totalSum;
    for(int i=0; i<n; i++){
        rightSum -= arr[i];
        if(leftSum == rightSum){
            return i;
        }

       
        leftSum += arr[i];
    }

    return -1;
}
int main(){
    int arr[]={4,0,0,-4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<findEquilibrium(arr,n);
}