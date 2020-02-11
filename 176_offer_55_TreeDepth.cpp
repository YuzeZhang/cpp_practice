//
// Created by Zeno on 2020/2/11.
//

/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/
class Solution {
public:
    int TreeDepth(TreeNode* pRoot)
    {
        if(pRoot == nullptr)
            return 0;

        int nLeft = TreeDepth(pRoot->left);
        int nRight = TreeDepth(pRoot->right);

        return (nLeft > nRight) ? (nLeft + 1) : (nRight + 1);
    }
};