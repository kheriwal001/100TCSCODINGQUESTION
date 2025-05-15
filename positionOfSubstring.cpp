#include<bits/stdc++.h>
using namespace std;
int posOfSubstring(string s1, string s2){
   
   
    for(int i=0; i<s1.size(); i++){
        bool flag = false;
        string temp ="";
        for(int j =i; j<s1.size(); j++ ){
            temp+=s1[j];
            if(temp == s2 ){
               flag = true;
               break;
            }
        }

        if(flag){
            
            return i;
        }
    }
    return -1;
}
int main(){
    string str1 ="hello";
    string str2 = "el";
    cout<<posOfSubstring(str1,str2);
}