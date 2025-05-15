#include<bits/stdc++.h>
using namespace std;
string removeSymbol(string str){
    int n = str.size();
    string s="";
    for(int i=0; i<n; i++){
        char ch = str[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            s+=str[i];
        }
    }
    return s;
}
int main(){
    string str = "1.Python & 2.Java";
    cout<<removeSymbol(str);
}