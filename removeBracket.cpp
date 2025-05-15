#include<bits/stdc++.h>
using namespace std;
void removeBracket(string &str){
    
    for(int i=0; i<str.length(); i++ ){
        if(str[i] == '(' || str[i]==')'){
            str.erase(i,1);
            i--;
        }
    }
    return;
}
int main(){
    string str = "a+((b-c)+d)";
    removeBracket(str);
    cout<<str;
}