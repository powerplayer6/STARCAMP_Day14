typedef struct Node{
    long data;
    struct Node* next;
} node;

void printNode(node* nod);

void pushBack(node* head, long newdata);

void freeNode(node *head);

//node *head1;

void popFront();

void push_front(node** head_pp, long new_data);

void pop_back(node** head_pp);

void reverse(node** head_pp);