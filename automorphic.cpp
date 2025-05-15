#include<bits/stdc++.h>
using namespace std;
bool checkAutomorphic(int n){
    int res = n*n;
    
    int temp =n;
   
    while (temp)
    {
        /* code */
        
        if(temp%10 != res%10){
            return false;
        }

        res=res/10;
        temp = temp/10;
    }

    return true;
    
}
int main(){
    int n = 66;
    cout<<checkAutomorphic(n);
}