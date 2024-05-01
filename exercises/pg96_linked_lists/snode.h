#include <iostream>
template <typename T>
class SNode {
    public:
        T data;
        SNode* next;
        SNode() : next(nullptr) {}
        SNode(T datum) : next(nullptr), data(datum) {}
        void dump() { 
            std::cout << this << ", " << next << " (" << data << ")";
        };
};


