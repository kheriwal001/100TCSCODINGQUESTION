#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low , int high){
    int i = low;
    int j = high;
    int pivot = arr[low];
    while(i<j){
        while(arr[i] <= pivot && i<=high){
            i++;
        }
        while(arr[j] > pivot && j >= low){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }

    swap(arr[low],arr[j]);
    return j;
}
void quickSort(int arr[], int low , int high){
    if(low > high) return ;

    int pivot = partition(arr,low,high);
    quickSort(arr,low,pivot-1);
    quickSort(arr,pivot+1, high);
}
int main(){
    int arr[] = {9, 4, 7, 6, 3, 1, 5};
    int n = 7;
    
    quickSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}