/*
Task 1 : Question 3
Ajay Anil Kumbhar
*/

#include<bits/stdc++.h>
using namespace std;

 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int x = maxDepth(root->left);
        int y = maxDepth(root->right);
        return 1+max(x,y);
    }
    
};

int main(){
    int t;
    cin>>t;
    while(t--){
        TreeNode* root;
        /*Some method of taking input*/
        Solution sol;
        int ans = sol.maxDepth(root);
    }
}