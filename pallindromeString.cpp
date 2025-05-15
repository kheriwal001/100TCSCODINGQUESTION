#include<bits/stdc++.h>
using namespace std;
bool checkPallindrome(string str){
    int i =0;
    int j = str.size()-1;
    while(i<j){
        if(str[i] != str[j]){
            return false;
        }

        i++;
        j--;
    }

    return true;
}
int main(){
    string str =  "TAKE U FORWARD";
    if(checkPallindrome(str)){
        cout<<"Pallindrome";
    }else{
        cout<<"not pallindrome";
    }
}