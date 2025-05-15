#include<bits/stdc++.h>
using namespace std;
string largestString(string s){
    int maxi = 0;
    string str = "";
    string res="";
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
           if(count>maxi){
                maxi = count;
                res = str;
           }   
           
           count = 0;
           str="";
        }else{
            count++;
            str +=s[i];
        }
       
    }

    if(count>maxi){
       
        res = str;
   }   

    return res;
}
int main(){
    string s = "teams microsoft ioejorkf[ekr[fkpe]]";
    cout<<largestString(s);
}