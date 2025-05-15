#include<bits/stdc++.h>
using namespace std;
string reverse(string &str){
    int n = str.size();
    int i=0; 
    while(i<n/2){
        char temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;

        i++;
    }

    return str;
}

string reverseWord(string str){
  string result="";
  string temp="";
  for(int i = str.size()-1; i>=0; i--){
    if(str[i]==' '){
        result += reverse(temp);
        result +=' ';
        temp="";
    }
    temp+=str[i];
  }
  result += reverse(temp);
 
  return result;
}
int main(){
    string str = "this is an amazing program";
    cout<<reverseWord(str);
}