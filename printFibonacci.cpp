#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }

    int last = fibonacci(n-1);
    int secondLast = fibonacci(n-2);

    return last+secondLast;
}
int main(){
    int n =5;
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    int first = 0;
    int second = 1;
    for(int i=2; i<=n; i++){
        int curr = first + second;
        first = second;
        second = curr;
        v.push_back(curr);
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
    cout<<endl;

    cout<<fibonacci(n);
}