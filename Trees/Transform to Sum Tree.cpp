class Solution {
  public:
    int sum_helper(Node* node)
    {
        if(node == NULL) 
        return 0;
        
        int old_value = node->data;
        
        node->data = sum_helper(node->left) + sum_helper(node->right);
        
        return old_value + node->data;
    }
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        // Your code here
        if(node == NULL) 
        return ;
        
        sum_helper(node);
        
        return ;
        
    }
};
