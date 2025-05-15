#include<bits/stdc++.h>
using namespace std;
void nonRepeatingChar(string s){
    vector<int> vis(256,0);
    for(char ch: s){
        
            vis[ch]++;
    }

    for(int i=0; i<256; i++){
        if(vis[i] == 1){
            cout<<(char)i<<" ";
        }
    }
}
int main(){
    string s = "google";
    nonRepeatingChar(s);
}