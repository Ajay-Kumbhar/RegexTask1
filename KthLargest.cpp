/*
Task 1 : Question 4
Ajay Anil Kumbhar
*/

#include<bits/stdc++.h>
using namespace std;

class KthLargest {
public:
    int freq[20001] = {};
    int n;
    KthLargest(int k, vector<int>& nums) {
       n=k;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]+10000]++;
        }
    }
    
    int add(int val) {
        freq[val+10000]++;
        int p = n;
        int j;
        for(j=20000;j>=0;j--){
            p-=freq[j];
            if(p<=0){
                break;
            }
        }
        return j-10000;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,m;
        cin>>n>>k>>m;
        vector<int> nums;
        for(int i=0;i<n;i++){
            int x;
            nums.push_back(x);
        }
        KthLargest kthLargest(k,nums);
        for(int i=0;i<m;i++){
            int val;
            cin>>val;
            cout<<kthLargest.add(val)<<" ";
        }
    }
}