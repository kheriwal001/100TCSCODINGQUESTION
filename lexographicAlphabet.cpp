#include<bits/stdc++.h>
using namespace std;
string lexiAlphabet(string &str){
    for(int i=0; i<str.length(); i++){
        int ascii = (int)str[i];
        if(ascii == 90){
            ascii = 65;
            str[i] = char(ascii);
        }
        else if(ascii == 122){
            ascii = 97;
            str[i] = (char)ascii;
        }
        else if((ascii >=65 && ascii <=90)||(ascii >=97 && ascii<=122)){
            str[i]=(char)ascii+1;
        }
    }
    return str;
}
int main(){
    string str = "abcdxyz";
    cout<<lexiAlphabet(str);
}