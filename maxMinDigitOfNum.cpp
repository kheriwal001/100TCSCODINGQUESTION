#include<bits/stdc++.h>
using namespace std;
void findMaxMin(int n){
    int maxi = INT_MIN;
    int mini = INT_MAX;
    while (n)
    {
        int d = n%10;
        maxi = max(maxi,d);
        mini = min(mini,d);
        n=n/10;
    }

    cout<<"maxi"<<maxi<<" "<<"mini"<<mini<<endl;
    
}
int main(){
    int n = 234567;
    findMaxMin(n);
}