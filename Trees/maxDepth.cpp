#runtime : 12 ms
#memory usage : 18.7 MB 

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr)
            return 0;
        
        if(root->left==nullptr && root->right==nullptr)
            return 1;
        
        return max(maxDepth(root->left), maxDepth(root->right))+1;
    }
};



##************************************************##

#runtime :4 ms
#memory usage : 18.9 MB

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr)
            return 0;
        
        int leftD = maxDepth(root->left);
        int rightD = maxDepth(root->right);
        
        return max(leftD, rightD)+1;
    }
};

