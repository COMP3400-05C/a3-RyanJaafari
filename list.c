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
 * Counts how many nodes are in the list.
 * If the list is empty (head == NULL), the count is 0.
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
int ll_size(struct ll_node *head) {
  
}

/**
 * TODO: Describe what the function does
 */
struct ll_node *ll_find(struct ll_node *head, int value) {
   
}

/**
 * TODO: Describe what the function does
 */
int *ll_toarray(struct ll_node *head) {
   
}

/**
 * TODO: Describe what the function does
 */
struct ll_node *ll_create(int data) {
   
}

/**
 * TODO: Describe what the function does
 */
void ll_destroy(struct ll_node *head) {
    
}

/**
 * TODO: Describe what the function does
 */
void ll_append(struct ll_node *head, int data) {
 
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

