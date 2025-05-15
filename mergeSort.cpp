#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int start, int mid, int end){
    int left = start;
    int right = mid+1;
    vector<int>v;
    while(left <=mid && right <=end){
        if(arr[left] <= arr[right]){
            v.push_back(arr[left]);
            left++;
        }else{
            v.push_back(arr[right]);
            right++;
        }
    }

    while (left<=mid)
    {
        /* code */
        v.push_back(arr[left]);
        left++;
    }

    while(right <=end){
        v.push_back(arr[right]);
        right++;
    }

    for(int i =start ; i<=end; i++){
        arr[i] = v[i-start];
    }
    
}
void mergeSort(int arr[], int start,int end){
    if(start>=end) return;
    int mid = (start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,start,mid,end);
}
int main(){
    int arr[] = {9, 4, 7, 6, 3, 1, 5};
    int n = 7;
    mergeSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}