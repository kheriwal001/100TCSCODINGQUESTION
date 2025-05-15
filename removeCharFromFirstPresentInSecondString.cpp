#include<bits/stdc++.h>
using namespace std;
void removeCharFromFirst(string str1, string str2){
    vector<int>vis(256,0);
    for(char ch: str2){
        vis[ch] = 1;
    }
    vector<char>res;
    for(char ch : str1){
        if(vis[ch] == 0){
            res.push_back(ch);
        }
    }

    for(char ch: res){
        cout<<ch;
    }
}
int main(){
    string str1 = "abcdef";
    string str2 = "cefz";
    removeCharFromFirst(str1,str2);
}