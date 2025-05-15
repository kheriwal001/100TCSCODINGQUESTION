#include<bits/stdc++.h>
using namespace std;
void calcFreq(string s){
    vector<int> freq(256,0);
    for(char ch: s){
        freq[ch]++;
    }

    for(int i =0; i<256; i++){
        if(freq[i] != 0){
            cout<<(char)i<<freq[i]<<" ";
        }
    }
}
int main(){
    string s = "takeuforward";
    calcFreq(s);
}