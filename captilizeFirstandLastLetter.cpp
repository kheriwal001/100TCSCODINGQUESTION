#include<bits/stdc++.h>
using namespace std;
void capitalize(string &s){
    
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            s[i+1] = toupper(s[i+1]);
            s[i-1] = toupper(s[i-1]);
        }
    }
    s[s.length()-1] = toupper(s[s.length()-1]);
}
int main(){
    string s="take u forward is awesome";
    capitalize(s);
    cout<<s<<endl;
}