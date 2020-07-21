//#include "structures.h"
#include <stdio.h>
#include <stdlib.h>

// Structures file, will add usefull structures. i.e. Linked lists, Tree's ect.
// for the moment not adding it to compile.

typedef struct list_node {
    long long val;
    struct list_node *n;
    struct list_node *p;
} list_node;

// Returns head, since it's a doubly linked list.
list_node* list_init()
{
    list_node *head = malloc(sizeof(list_node));
    list_node *tail = malloc(sizeof(list_node));
    head->n = tail;
    head->p = NULL; // NOT CIRCULAR
    head->val = 0;
    tail->n = NULL; // NOT CIRCULAR
    tail->p = head;
    tail->val = 0;
    return head; // really need to freshen up on my pointers, dunno if this is correct
}

/*
list_node* list_add(list_node *p, list_node *n)
{
    //STUB
}
*/

// have to free head and tail from memory
void list_deinit(list_node *head, list_node *tail)
{
    free(head);
    free(tail);
}

// Only for testing purpouses.
// TODO clean this up, and properly implement doubly linked list
int main()
{
    list_node* head = list_init();
    printf("%lld\n", head->val);
    list_deinit(head, head->n);
    return 0;
    
}
