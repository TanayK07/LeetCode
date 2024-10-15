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
            unordered_set<int> del;
          vector<TreeNode*> res;

    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {

        for (auto i : to_delete) del.insert(i);
          helper(root,false);
          return res;



    }

             TreeNode* helper(TreeNode* root,bool px){
            if(!root) return nullptr;
            if(del.contains(root->val)){
                root->left=helper(root->left,false);
                root->right=helper(root->right,false);
                return nullptr;
            }
            else {
                if(!px) res.push_back(root);

                    root->left=helper(root->left,true);
                root->right=helper(root->right,true);
                return root;
        
            }
          }
};