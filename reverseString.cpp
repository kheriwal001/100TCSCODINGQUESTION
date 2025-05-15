#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abhi";
    cout<<s;
    int i=0; 
    int j = s.size()-1;
    while (i<j)
    {
        /* code */
        char ch = s[i];
        s[i] = s[j];
        s[j] = ch;

        i++;
        j--;
    }

    cout<<endl;
    cout<<s;
    return 0;
    
}