#include<bits/stdc++.h>
using namespace std;
int findSum(string s){
    string tempSum ="";
    int sum =0;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='0' && s[i]<= '9'){
            tempSum +=s[i];
        }
        else{
            sum += atoi(tempSum.c_str());
            tempSum="";
        }
        
    }
    return sum + atoi(tempSum.c_str());
}
int main(){
    string s = "1xyz23lsd7";
    cout<<findSum(s);
}