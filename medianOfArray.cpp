#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,7,1,2,5,6};
    int n =sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);
    

    if(n%2){
       cout<<arr[n/2];
        
    }else{
         
        int ind1 = (n/2)-1;
        int ind2 = (n/2);
        cout<<(double)(arr[ind1] + arr[ind2])/2;
    }

    
    return 0;

}