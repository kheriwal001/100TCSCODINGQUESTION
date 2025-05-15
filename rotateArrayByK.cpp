#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n =5;
    int k = 2;
    int arr1[2]={0};
    int arr2[3]={0};

    int j =0;
    for(int i=0; i<k; i++){
        arr1[j++] = arr[i];
    }

    int l =0;
    for(int i=k; i<n; i++){
        arr2[l++] = arr[i];
    }

    for(int i =0 ; i<3; i++){
        cout<<arr2[i]<<" ";
    }

    for(int i =0; i<2; i++){
        cout<<arr1[i]<<" ";
    }
}