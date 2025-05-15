#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
   
    int count =0;
    for(int i =1; i*i<=n; i++){
        if(n%i == 0){
            count++;
            if(n/i != i){
                count++;
            }
        }
    }

    return count==2;
}
void checkFactor(int n , vector<int> &v1){
    for(int i =1; i*i<=n; i++){
        if(n%i == 0){
            v1.push_back(i);
            if(n/i != i){
                v1.push_back(n/i);
            }
        }
    }
}
int main(){
	int n = 6;
    vector<int>v1;
    checkFactor(n,v1);

    for(int i =0; i<v1.size(); i++){
        if(prime(v1[i])){
            cout<<v1[i]<<" ";
        }
    }
}