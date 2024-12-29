// Linked list eleman sayma
int countRecursive(struct node *head){
    if(head==NULL){
        return 0;
    }
    return 1 + countRecursive(head->next);
}


// Linked list arama yapmak
struct node *locate(struct node *head, int key){
    struct node *locate = NULL;
    if(head->data != key){
        head=head->next;
    }else{
        locate=head;
        break;
    }
    return(locate)
}


// iki listeyi birleştir
struct Node* mergelist(struct Node* head1, struct Node* head2) {
    if (head1 == NULL) return head2; // Liste 1 boşsa liste 2'yi döndür
    if (head2 == NULL) return head1; // Liste 2 boşsa liste 1'i döndür

    struct Node* last = head1;
    while (last->next != NULL) { // Liste 1'in sonuna kadar ilerle
        last = last->next;
    }

    last->next = head2; // Liste 2'yi liste 1'in sonuna bağla
    return head1;
}
