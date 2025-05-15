#include<bits/stdc++.h>
using namespace std;
string sort(string &s){
    string ans="";
    vector<int>freq(256,0);
    for(char ch: s){
        freq[ch]++;
    }

    for(int i=0; i<256; i++){
        if(freq[i]>0){
            while(freq[i]){
                ans += (char)i;
                freq[i]--;
            }
        }
    }

    return ans;
}
int main(){
    string str = "edcba";
    cout<<sort(str);
}