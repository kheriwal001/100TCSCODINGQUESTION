#include<bits/stdc++.h>
using namespace std;
void printDuplicate(string str){
    // unordered_map<char,int>mp;
    // for(char ch:str){
    //     mp[ch]++;
    // }

    // for(auto it: mp){
    //     if(it.second >1){
    //         cout<<it.first<<"-"<<it.second<<endl;
    //     }
    // }

    vector<pair<int,int>>v;
    vector<int>vis(256,0);
    for(int i=0; i<str.size(); i++){
        int count =0;
        for(int j=0; j<str.size(); j++){
            if(str[i] == str[j]){
                count++;
            }
        }
        
        if(count>1 &&vis[str[i]] == 0){
            v.push_back({str[i],count});
            vis[str[i]] = 1;
        }

    }

    for(int i=0; i<v.size(); i++){
        cout<<(char)v[i].first<<"-"<<v[i].second<<endl;
    }


}
int main(){
    string str = "sinstriiintng";
    printDuplicate(str);
}