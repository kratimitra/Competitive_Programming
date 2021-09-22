void myFun(Node* root, Node* &head, Node* &prev,int &f)
{
    if(root == NULL) 
      return;
    
    myFun(root->left, head, prev, f);
    
    if(f==0)
    {
        head = root;
        prev = root;
        f = 1;
    }
    else{
        prev->right = root;
        prev->right->left = prev;
        prev = root;
        
        
    }
    
    myFun(root->right, head, prev, f);
    
    return ;
}
// This function should return head to the DLL
class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root)
    {
        // your code here
        Node *head = root;
        Node *prev = root;
        int f = 0;
        myFun(root, head, prev, f);
        
        return head;
    }
};



