#include<bits/stdc++.h>
using namespace std;

bool checkLeap(int n){
    if(n%400 == 0)  return true;
    if(n%100 == 0) return false;
    if(n%4 == 0) return true;
   
    
}
int main(){
    int year =2000;
    bool ans = false;
    
    ans =  checkLeap(year);
    
    cout<<ans;
}