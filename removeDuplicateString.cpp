#include<bits/stdc++.h>
using namespace std;
void removeDuplicate(string &s){
    unordered_map<char,int>mp;

    string str="";

    for(int i=0; i<s.size(); i++){
       if(mp.find(s[i]) == mp.end()){
        str.push_back(s[i]);
       }
       mp[s[i]]++;
    }
     s = str;

}
int main(){
    string s ="bcabc";
    removeDuplicate(s);
    cout<<s<<" ";
}