#include<bits/stdc++.h>
using namespace std;
void removeDuplicate(string str){
    // unordered_set<char>st;
    // for(int i=0; i<str.size(); i++){
    //     st.insert(str[i]);
    // }

    // for(char ch : st){
    //     cout<<ch<<" ";
    // }

    vector<char>ans;
    vector<int> vis(256,0);
    for(char ch: str){
        if(vis[ch]  == 0 ){
           ans.push_back(ch);
           vis[ch] = 1;
        }
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    string str = "bcabc";
    removeDuplicate(str);
}