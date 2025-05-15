#include<bits/stdc++.h>
using namespace std;
void removeAllVowel(string &str){
    string s ="";
    int j =0;
    for(int i=0; i<str.length(); i++){
        char ch = tolower(str[i]);
        if(str[i] != 'a' && str[i] && 'e' && str[i] && 'i' && str[i] != 'o'&& str[i] != 'u'){
           str[j++] = str[i];
        }
    }
    str.resize(j);
    return ;
}
int main(){
    string str = "Take you Forward";
    removeAllVowel(str);
    cout<<str;
}