#include<bits/stdc++.h>
using namespace std;
void movesAllZeros(int arr[], int n){
    int j=0;
    for(int i=0; i< n; i++){
        if(arr[i] != 0){
            arr[j++] = arr[i];
        }
    }

    for(int i=j; i<n; i++){
        arr[i]=0;
    }
}
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[] = {1,2,0,3,0,0,4};
   


    movesAllZeros(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}