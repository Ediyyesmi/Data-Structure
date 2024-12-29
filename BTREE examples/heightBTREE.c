//find height of binary tree

int height(BTREE *root){
    if(root == NULL){
        return -1;
    }else{
        int leftHeight = treeHeight(root->left);
        int rightHeight = treeHeight(root->right);
        if(leftHeight > rightHeight){
            return leftHeight + 1;
        }else{
            return rightHeight + 1;
        }
    }
}