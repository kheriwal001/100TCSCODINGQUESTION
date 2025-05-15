#include<bits/stdc++.h>
using namespace std;

bool sortEle(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }

    return a.second > b.second;
}
void Sortelementsbyfreq(int arr[], int n){
    unordered_map<int,int> mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    vector<pair<int,int>> vec;
    for(auto it = mp.begin(); it != mp.end(); it++){
        vec.push_back({it->first, it->second});
    }


    sort(vec.begin(),vec.end(),sortEle);

    for(int i=0; i<vec.size(); i++){
        while (vec[i].second > 0)
        {
           cout<<vec[i].first<<" ";
           vec[i].second--;
        }
        
    }

}
int main(){

    int arr[] = {3, 3, 5, 2, 1, 1, 2};
    int n = 7;
    Sortelementsbyfreq(arr, n);
    return 0;
}