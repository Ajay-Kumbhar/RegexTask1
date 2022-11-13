/*
Task 1 : Question 1
Ajay Anil Kumbhar
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i++){
            int j;
            for(j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
            if(j!=nums.size()){
                break;
            }
        }
        return ans;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,target;
        cin>>n>>target;
        vector<int> nums;
        for(int i=0;i<n;i++){
            int x;
            nums.push_back(x);
        }
        Solution sol;
        vector<int> ans;
        ans = sol.twoSum(nums, target);
        cout<<"["<<ans[0]<<","<<ans[1]<<"]\n";
    }
}
