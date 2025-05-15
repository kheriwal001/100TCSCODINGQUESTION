#include<bits/stdc++.h>
using namespace std;
int maxProductSubArray(vector<int> &nums){
    int pre=1;
    int suf = 1;
    int ans = nums[0];
    int n = nums.size();
    for(int i=0; i<nums.size(); i++){
        if(pre == 0) pre = 1;
        if(suf ==  0) suf = 1;
        pre *= nums[i];
        suf *= nums[n-i-1];
        ans = max(ans, max(pre, suf));
    }
    return ans;
}
int main(){
    vector<int> nums = {1,2,-3,0,-4,-5};
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    return 0;
}