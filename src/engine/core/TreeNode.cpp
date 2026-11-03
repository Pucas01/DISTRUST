struct TreeNode
{
    TreeNode* left;
    TreeNode* parent;
    TreeNode* right;
    char color;
    char isNil;
};

struct Tree
{
    TreeNode* head;

    void rotateRight(TreeNode* node);
};

// FUNCTION: 0x50F660 Tree::rotateRight
void Tree::rotateRight(TreeNode* node)
{
    TreeNode* pivot = node->left;
    node->left = pivot->right;
    if (!pivot->right->isNil)
        pivot->right->parent = node;
    pivot->parent = node->parent;
    if (node == head->parent)
        head->parent = pivot;
    else if (node == node->parent->right)
        node->parent->right = pivot;
    else
        node->parent->left = pivot;
    pivot->right = node;
    node->parent = pivot;
}

// FUNCTION: 0x50F230 treeMax
TreeNode* __cdecl treeMax(TreeNode* node)
{
    while (!node->right->isNil)
        node = node->right;
    return node;
}

// FUNCTION: 0x52E310 treeMin
TreeNode* __cdecl treeMin(TreeNode* node)
{
    while (!node->left->isNil)
        node = node->left;
    return node;
}
