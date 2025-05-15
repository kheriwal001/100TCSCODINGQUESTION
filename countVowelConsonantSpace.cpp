#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Take u forward is Awesome";
    int n = s.length();
    for(int i=0; i<n; i++){
        s[i] = tolower(s[i]);

    }

    int vowel =0;
    int space = 0;
    int consonent = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'  || s[i]=='u' ){
            vowel++;
        }
        else if(s[i] >= 'a' && s[i]<='z'){
            consonent++;
        }
        else if(s[i] == ' '){
            space++;
        }

    }

    cout<<"vowel"<<vowel<<" consonent"<<consonent<<" space "<<space;
}