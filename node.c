#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    //node* a = malloc(sizeof(node*));
    /*node* b = malloc(sizeof(node*));
    node* c = malloc(sizeof(node*));
    node* d = malloc(sizeof(node*));
    head1 = malloc(sizeof(node*));
    head1->data=1;
    head1->next=b;
    b->data=2;
    b->next=c;
    c->data=3;
    c->next=d;
    d->data=4;
    d->next=NULL;
    pushBack(head1, 5);
    printNode(head1);
    //freeNode(head1);
    popFront();
    printNode(head1);
    freeNode(head1);*/

    node* head_linked_list_1 = NULL;

    push_front(&head_linked_list_1, 999);
    pushBack(head_linked_list_1, 100);
    pushBack(head_linked_list_1, 200);
    pushBack(head_linked_list_1, 300);
    push_front(&head_linked_list_1, 1);
    push_front(&head_linked_list_1, 2);
    printNode(head_linked_list_1);
    pop_back(&head_linked_list_1);
    printf("\n");
    printNode(head_linked_list_1);

    return 0;
}