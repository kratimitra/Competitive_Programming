 void DFSCycle(Node* curr,Node* node,vector<Node *>& vis)
    {
        
        vis[node->val] = node;
        for(auto child: curr->neighbors)
        {
            if(vis[child->val] == NULL)
            {
                Node *nodeX = new Node(child->val);
                (node->neighbors).push_back(nodeX);
                DFSCycle(child,nodeX,vis);
            }
            else
                (node->neighbors).push_back(vis[child->val]);
        }
    }
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL)
            return NULL;
        
        vector<Node *> vis(105,NULL);
        Node* copy = new Node(node->val);
        vis[node->val] = copy;
        
        for(auto curr: node->neighbors)
        {
            if(vis[curr->val] == NULL)
            {
                Node *nodeX = new Node(curr->val);
                (copy->neighbors).push_back(nodeX);
                DFSCycle(curr,nodeX,vis);
            }
            else
                (copy->neighbors).push_back(vis[curr->val]);
        }
        return copy;
        
    }
