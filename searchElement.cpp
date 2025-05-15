#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int k){
   
    int n= 5;
    sort(arr, arr+n);
    int left = 0;
    int right = n-1;
    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == k){
            return mid;
        }

        else if(arr[mid]> k){
            right = mid-1;
        }
        else{
            left = mid +1;
        }
    }

    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int k =3;


    cout<< binarySearch(arr,k);
    cout<<endl;
    int ans = 0;
    for(int i=0; i<5; i++){
        if(arr[i] == k){
            ans = i;
        }
    }

    cout<<ans;
}
