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

