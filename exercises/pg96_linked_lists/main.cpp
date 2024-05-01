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

#include "doublylinked.h"
int main() {
    DoublyLinkedList<int> dll;

    dll.insertAtBeginning(19);
    dll.insertAtBeginning(42);
    dll.insertAtBeginning(9);
    dll.dump();

    dll.deleteByValue(42);
    std::cout << "delete done" << std::endl;
    dll.dump();
    
    return 0;
}

