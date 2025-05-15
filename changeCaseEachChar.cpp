#include<bits/stdc++.h>
using namespace std;
string changeCase(string &str){
    for(int i=0; i<str.size(); i++){
        
        if(str[i]>=65 && str[i]<=90){
            str[i]=tolower(str[i]);
        }
        else if(str[i]>=97 && str[i]<=122){
            str[i] = toupper(str[i]);
        }
    }

    return str;
}
int main(){
    string str = "javA";
    cout<<changeCase(str);
}