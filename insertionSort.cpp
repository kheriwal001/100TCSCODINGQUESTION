#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int j =i;
        while (j>0 && arr[j-1]>arr[j])
        {
            /* code */
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
        
    }

    return;
}
int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = 6;
    insertionSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}