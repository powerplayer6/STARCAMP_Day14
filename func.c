#include <stdio.h>
#include <stdlib.h>
#pragma once

typedef struct Node{
    long data;
    struct Node* next;
} node;

void printNode(node* nod)
{
    node temp = *nod;
    printf("%ld ", temp.data);
    do
    {
        temp = *temp.next;
        printf("%ld ", temp.data);
    }
    while(temp.next!=NULL);
    printf("\n");
}

void pushBack(node* head, long newdata)
{
    node *new_node=malloc(sizeof(node));
    if(!new_node)
    {
        printf("Push back: could not malloc\n");
        exit -1;
    }
    new_node->data=newdata;
    new_node->next=NULL;
    node *last_node;
    while(head->next!=NULL)
    {
        head=head->next;
    }
    last_node=head;
    last_node->next = new_node;
}

void freeNode(node *head)
{
    if(head->next!=NULL)
    {
        freeNode(head->next);
    }
    free(head);
}

node *head1;

void popFront()
{
    node* tmp;
    tmp = head1;
    head1=head1->next;
    free(tmp);
}

void push_front(node** head_pp, long new_data)
{
    node* new_node = malloc(sizeof(node));
    if(!new_node)
    {
        perror("Malloc failed\n");
        exit(-1);
    }
    new_node->data=new_data;
    new_node->next=*head_pp;
    *head_pp=new_node;
}

void pop_back(node** head_pp)
{
    node *sl_node, *l_node;
    l_node=*head_pp;
    while(l_node->next!=NULL)
    {
        sl_node=l_node;
        l_node=l_node->next;
    }
    if(l_node!=*head_pp)
    {
        sl_node->next=NULL;
    }
    else
    {

    }
    freeNode(l_node);
}

void reverse(node** head_pp)
{
    
}