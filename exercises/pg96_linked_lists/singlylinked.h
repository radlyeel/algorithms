#include "snode.h"

template <typename T>
class SinglyLinkedList {
    private:
        SNode<T>* head;
        // keeping a tail pointer facilitates appending at end of list
        SNode<T>* tail;  // Sometimes 'tail' denotes the node after the head,
                      // and therefore, the rest of the list;  Think LISP
    public:
        SinglyLinkedList() : head(nullptr), tail(nullptr) {}

        void insertAtBeginning(T datum) {
            SNode<T>* node = new SNode<T>(datum);
            node->next = head;
            head = node;
        }

        void append(T datum) {
            SNode<T>* node = new SNode<T>(datum);
            tail = node;
        }

        void dump() {
           SNode<T>* next = head;
           while (next != nullptr) {
               next->dump();
               std::cout<<std::endl;
               next = next->next;
           }
        }

        void deleteByValue(T value) {
           SNode<T>* prev = head;
           while (prev != nullptr) {
               SNode<T>* tst = prev->next;
               if tst->
            
};

