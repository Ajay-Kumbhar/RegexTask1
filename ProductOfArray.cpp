/*
Task 1 : Question 2
Ajay Anil Kumbhar
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int product = 1;
        vector<int> suffix;
        for(int i=nums.size()-1;i>=1;i--){
            product*=nums[i];
            suffix.push_back(product);
        }
        product = 1;
        for(int i=suffix.size()-1,j=0;i>=0;i--,j++){
            ans.push_back(product*suffix[i]);
            product*=nums[j];
        }
        ans.push_back(product);
        return ans;
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
        vector<int> ans;
        ans = sol.productExceptSelf(nums);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";

    }
}