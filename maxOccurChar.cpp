#include<bits/stdc++.h>
using namespace std;
char maxOccurChar(string str){
    vector<int>mp(256,0);
    for(char ch : str){
        mp[ch]++;
    }
    int max = 0;
    char ans = str[0];
    for(char ch : str){
        if(mp[ch] > max){
            max = mp[ch];
            ans = ch;
        }
    }
    return ans;
}
int main(){
    string str="takeuforward";
    cout<<maxOccurChar(str);
}