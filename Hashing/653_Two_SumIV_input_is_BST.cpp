class Solution {
public:
    unordered_set<int>set;
    bool findTarget(TreeNode* root, int k) {

     if(root==NULL) return false;

     
        if(set.find(k-root->val)!=set.end()){
              return true;
        }

        set.insert(root->val);
        bool left=findTarget(root->left,k);
        bool right=findTarget(root->right,k);


        return left||right;
        
     }
};
