#include<bits/stdc++.h>
using namespace std;
bool angramsString(string s1, string s2){
    if(s1.length() != s2.length()) return false;
    vector<int>freq(256,0);
   for(int i =0; i<s1.size(); i++){
        freq[s1[i]]++;
   }


   for(int i=0; i<s2.size(); i++){
        freq[s2[i]]--;
        if(freq[s2[i]] < 0)  return false;

   }

   return true;
}
int main(){
    string s1 = "abhi";
    string s2 = "iabh";
    cout<<angramsString(s1,s2);
}