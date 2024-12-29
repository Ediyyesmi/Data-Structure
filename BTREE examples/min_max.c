int BSTmin(BTREE root){
    if(root!= NULL){
        while(root->left!= NULL){
            root=root->left;
        }
        return root->data;
    }else{
        return -100;
    }
}



int BSTmax(BTREE root){
    if(root!= NULL){
        while(root->right!= NULL){
            root=root->right;
        }
        return root->data;
    }else{
        return -100;
    }
}