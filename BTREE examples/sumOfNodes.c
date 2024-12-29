//sum of all nodes
int sumOfNodes(struct Node* root) {
    if (root == NULL) {
        return 0; 
    }
   
    return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);
}


//write only nodes with left child 
void leftChild(BTREE *root){
    if(root!=NULL){
        if(root->left!=NULL && root->right==NULL){
        printf("%d" ,root->data);
        }
        leftChild(root->left);
        leftChild(root->right);
    }
    return 0; 
}