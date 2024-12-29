#include stdio.h>

//finding the number of nodes in BST
int size(BTREE root){
    if(root==NULL){
        return 0;
    }else{
        return 1 + size(root->left) + size(root->right);
    }
}


//finding the number of leaves in a BST
int leaves(BTREE root){
    if(root==NULL){
        return 0;
    }
    if(root->left == root->right){
        return 1;
    }
    return leaves(root->left) + leaves(root->right);
    
}
  

int main(){

    leaves(myroot);
    size(myroot);

    return 0;
}