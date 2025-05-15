#include<bits/stdc++.h>
using namespace std;
string removeSpace(string str){
    for(int i =0; i<str.length(); i++){
        if(str[i] == ' '){
            str.erase(i,1);
            i--;
        }
    }
    return str;
}
int main(){
    string str = "Take you forward";
    cout<<removeSpace(str);
}