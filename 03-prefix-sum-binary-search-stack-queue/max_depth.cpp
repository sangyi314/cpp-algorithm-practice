#include <iostream>

struct TreeNode
{
    int value{};
    TreeNode* left ;
    TreeNode* right ;
    TreeNode(int x)
    : value{x} , left{nullptr} , right{nullptr}
    {
    }
};

int maxDepth(TreeNode* root)
{
    if(root == nullptr)
        return 0;
    
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return std::max(left ,right) + 1 ;
}