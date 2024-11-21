#include stdio.h>

strcut node{
    int data;
    struct node *left;
    struct node *right;
}*BTREE;


BTREE newnode(int data){
    BTREE p = (BTREE)malloc(sizeof(struct node));
    p->data=data;
    p->left = p->right = NULL;
    return p;
}

BTREE insert (BTREE root, int x){
    if(root==NULL){
        root=newnode(x);
    }else{
        if(x<root->data){
            root->left = insert(root->left,x);
        }else{
            root->right = insert(root->right,x);
        }
    }
    return root;
}

void inorder(BTREE root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}


int main(){
    BTREE myroot = NULL;
    int i;
     printf("Enter numbers to insert into the tree (-1 to stop):\n");
    scanf("%d",&i);
    while(i!=-1){
        myroot=insert(myroot,i);
        scanf("%d",%i);
    }
    printf("Inorder traversal of the tree:\n");
    inorder(myroot);

    return 0;
}
