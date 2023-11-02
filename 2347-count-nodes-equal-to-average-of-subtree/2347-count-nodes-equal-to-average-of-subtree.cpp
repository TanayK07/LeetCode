/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int res=0;
int avg=0;
int sum=0;
int count=0;
pair<int,int> avghelp(TreeNode* node){
    if (node==NULL) return {0,0};
    pair<int,int> l=avghelp(node->left);
    pair<int,int> r=avghelp(node->right);
sum=node->val+l.first+r.first;
count =l.second+r.second;
count++;
avg=sum/count;
if (avg==node->val) res++;
return {sum,count};
}

    int averageOfSubtree(TreeNode* root) {
        avghelp(root);
        return res++;

    }
    
};