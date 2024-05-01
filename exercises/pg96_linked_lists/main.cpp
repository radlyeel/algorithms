/* Write a function to delete an element from a singly linked list given the
 * value of the element. 
 * Write a function to search for an element in a doubly linked list given 
 * the value of the element. 
 * Write a function to insert an element into a skip list at a given level. 
 * Write a function to delete an element from a skip list given the value 
 * of the element. 
 * Write a function to search for an element in a skip list given the 
 * value of the element.
 */

#include "singlylinked.h"
int main() {
    SinglyLinkedList<int> sll;
    sll.insertAtBeginning(19);
    sll.insertAtBeginning(42);
    sll.insertAtBeginning(9);
    sll.deleteByValue(42);
    sll.dump();
    return 0;
}

