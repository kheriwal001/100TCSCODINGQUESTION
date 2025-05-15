#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="hfioejrpofjqne123948@$%^";
    int vowel = 0;
    int consonent =0;
    int number = 0;
    int specialCharacter = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a' || s[i]=='e' || s[i] =='i' || s[i] == 'o' || s[i]=='u'){
            vowel++;
        }

        else if(s[i] >='a' &&  s[i] <='z'){
            consonent++;
        }

        else if(s[i]>='0' && s[i]<='9'){
            number++;
        }
        else{
            specialCharacter++;
        }
    }

    cout<<vowel<<" "<<consonent<<" "<<number<<" "<<specialCharacter<<endl;
    cout<<s.size();

}