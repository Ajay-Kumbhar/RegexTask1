/*
Task 1 : Question 5
Ajay Anil Kumbhar
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=0,sum=0,count=0,m=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                count++;
            }
            if(nums[i]>m){
                m=nums[i];
            }
        }
        if(count==nums.size()){
            return m;
        }
        for(int i=0;i<nums.size();i++){
            maxsum = max(maxsum,sum);
            sum+=nums[i];
            if(sum<0){
                sum=0;
            }
        }
        maxsum = max(maxsum,sum);
        return maxsum;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums;
        for(int i=0;i<n;i++){
            int x;
            nums.push_back(x);
        }
        Solution sol;
        int ans = sol.maxSubArray(nums);
        cout<<ans<<" ";
        
    }
}