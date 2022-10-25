class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(Node* node){
        // code here 
        if(node==NULL)
        return 0;
        
        int leftHeight=height(node->left);
        int rightHeight=height(node->right);
        int ans=max(leftHeight, rightHeight)+1;
        return ans;
    }
};
