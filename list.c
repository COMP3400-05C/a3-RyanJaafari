#include "list.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
// TODO: Include any necessary header files here

/**
 * Returns the head of the linked list.
 * 
 * @param head Pointer to the first node of the linked list.
 * @return The head of the linked list. If the list is empty (NULL), returns NULL.
 */
struct ll_node *ll_head(struct ll_node *head) {
    return head;
}

/**
 * TODO: Describe what the function does
 */
/**
 * Gives you the last node in the list.
 * If the list is empty (head == NULL), it gives back NULL.
 */
struct ll_node *ll_tail(struct ll_node *head) {
    if (head == NULL) return NULL;
    while (head->next != NULL) {
        head = head->next;   
    }
    return head;
}
/**
 * TODO: Describe what the function does
 */
/**
 * Counts how many nodes are in the list.
 * If the list is empty (head == NULL), the count is 0.
 */
int ll_size(struct ll_node *head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;  // move to the next node
    }
    return count;
}

/**
 * TODO: Describe what the function does
 */
/**
 * Looks through the list for the first node whose data == value.
 * If found, return that node. If not found (or list is empty), return NULL.
 */
struct ll_node *ll_find(struct ll_node *head, int value) {
    while (head != NULL) {           
        if (head->data == value) {   
            return head;             
        }
        head = head->next;           
    }
    return NULL;                     
}


/**
 * TODO: Describe what the function does
 */
/**
 * Makes a new array from the list values, in order.
 * If the list is empty, return NULL.
 * The caller (tests) will free the array.
 */
int *ll_toarray(struct ll_node *head) {
    int n = ll_size(head);
    if (n == 0) return NULL;

    int *arr = (int *)malloc((size_t)n * sizeof(int));
    if (arr == NULL) return NULL;  

    for (int i = 0; i < n; i++, head = head->next) {
        arr[i] = head->data;
    }
    return arr;
}

/**
 * TODO: Describe what the function does
 */
/**
 * Makes one new node with the given value.
 * Returns the new node, or NULL if memory cannot be allocated.
 */
struct ll_node *ll_create(int data) {
    struct ll_node *node = (struct ll_node *)malloc(sizeof(struct ll_node));
    if (node == NULL) return NULL;   
    node->data = data;
    node->next = NULL;               
    return node;
}

/**
 * TODO: Describe what the function does
 */
/**
 * Frees every node in the list.
 * Safe to call with head == NULL.
 */
void ll_destroy(struct ll_node *head) {
    while (head != NULL) {
        struct ll_node *next = head->next; 
        free(head);                          
        head = next;                         
    }
}

/**
 * TODO: Describe what the function does
 */
/**
 * Adds a new node with value `data` to the end of the list.
 * If head is NULL, we do nothing (caller should have a valid list).
 */
void ll_append(struct ll_node *head, int data) {
    if (head == NULL) return;                 
    struct ll_node *tail = ll_tail(head);     
    struct ll_node *node = ll_create(data);   
    if (node == NULL) return;                 
    tail->next = node;                        
}

/**
 * TODO: Describe what the function does
 */
struct ll_node *ll_fromarray(int* data, int len) {

}

/**
 * TODO: Describe what the function does
 */
struct ll_node *ll_remove(struct ll_node *head, int value) {

}

