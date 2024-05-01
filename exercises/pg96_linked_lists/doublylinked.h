#include "dnode.h"

template <typename T>
class DoublyLinkedList {
    private:
        DNode<T>* head;
        // keeping a tail pointer facilitates appending at end of list
        DNode<T>* tail; 
                      
    public:
        DoublyLinkedList() : head(nullptr), tail(nullptr) {}

        void insertAtBeginning(T datum) {
            DNode<T>* node = new DNode<T>(datum);

            // Make this the new head node
            // This is correct even if the list had been empty
            node->next = head;
            node->prev = nullptr;


            // If there was a head node before, it no longer is
            if (head != nullptr) {
                head->prev = node;
            }   
            head = node;

        }

        void append(T datum) {
            DNode<T>* node = new DNode<T>(datum);
            // Connect to previous tail node
            tail->next = node;
            node->prev = tail;
            // Make this te ne tail
            tail = node;
        }

        // Insert before target node
        void insertBeforeTarget(DNode<T> datum, DNode<T>* tgt) {
            DNode<T>* node = new DNode<T>(datum);
            node->next = tgt;
            node->prev = tgt->prev;
            tgt->prev->next = node;
            tgt->prev = node;
        }

        void dump() {
           DNode<T>* curr = head;
           while (curr != nullptr) {
               curr->dump();
               std::cout << std::endl;
               curr = curr->next;
           }
        }

        DNode<T>* findByValue(T value) {
           DNode<T>* tgt = head;
           while (tgt != nullptr) {
               if (tgt->data == value) {
                    break; 
               }
               tgt = tgt->next;
           } 
           return tgt;
        }
               
            
        void deleteByValue(T value) {
            DNode<T>* tgt = findByValue(value);
            tgt->prev->next = tgt->next;
            tgt->next->prev = tgt->prev;
            delete tgt;
        }

            
};

