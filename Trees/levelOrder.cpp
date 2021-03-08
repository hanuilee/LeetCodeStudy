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

// Runtime: 4ms
// Memory Usage: 12.5MB

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> output;
        queue<TreeNode*> q;
        if(root != NULL)
            q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            vector<int> mid_output;
            
            for(int i = 0; i < size; i++)
            {
                TreeNode* tempTN = q.front();
                mid_output.push_back(tempTN->val);
                q.pop();
                if(tempTN->left != NULL)
                    q.push(tempTN->left);
                if(tempTN->right != NULL)
                    q.push(tempTN->right);
            }
            output.push_back(mid_output);
        }
        return output;
    }
};