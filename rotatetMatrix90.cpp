#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m = n;
    int arr[m][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int temp[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            temp[i][j] = arr[j][i];
        }
    }


    for(int i=0; i<n; i++){
        reverse(temp[i], temp[i]+n);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           cout<<temp[i][j]<<" ";
        }

        cout<<endl;
    }
}