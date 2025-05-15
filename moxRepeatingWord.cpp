#include<bits/stdc++.h>
using namespace std;
string largestRepition(string str){
    int count =0;
    int maxCount =0;
    string ans="";
    for(int left = 0; left<str.size();){
        int right = left;
        while(right <str.size() && str[right] != ' '){
            right++;
        }
        string word = str.substr(left , right-left);

        vector<int>freq(256,0);
        for(char ch: word){
            freq[ch]++;
            count = max(count,freq[ch]);
        }

        if(count>maxCount){
            maxCount = count;
            ans = word;
        }

        left = right +1;


    }

    if(!ans.empty()){
        return ans;
    }else{
        return " -1";
    }
}
int main(){
    string str = "abcdefghij google microsoft";
    cout<<largestRepition(str);
}