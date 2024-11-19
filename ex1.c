/*Bir dairesel bağlı listenin başındaki ve sonundaki düğümlerin değerlerini toplayan ve
sonucu listenin son elemanı olarak ekleyen bir fonksiyon yazınız.Listede en az iki
eleman olduğunu kabul edebilirsiniz.*/

#include <stdio.h>


struct node *circularAdd(struct node *head){
    struct node *temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    struct node *temp2 = newnode[];
    temp2->data = head->data + temp->data;
    temp->next = temp2;
    temp2->next = head;
    return head;
}



int main(){

    return 0;
}
