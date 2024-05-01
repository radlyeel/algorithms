#include <iostream>
template <typename T>
class DNode {
    public:
        T data;
        DNode* next;
        DNode* prev;
        DNode() : next(nullptr), prev(nullptr) {}
        DNode(T datum) : next(nullptr), prev(nullptr), data(datum) {}
        void dump() { 
            std::cout << this << ": " << next << ", " << prev << " (" 
                      << data << ")";
        };
};


