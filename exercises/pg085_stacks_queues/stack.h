// std::stack (https://en.cppreference.com/w/cpp/container/stack) is a MUCH
// better choice, but this is instructive for inexperienced programmers

// For an intro to templates in C++, see
// https://www.geeksforgeeks.org/templates-cpp/
// Remember that template classes must be implemented in the header file.
#include <iostream>

typedef std::size_t size_t;

template <typename T>
class Stack {
    private:
        size_t size;
        // tos is the index of the most recently pushed item
        size_t tos;
        // This is why std::stack or std::vector is better
        T* data;
    public:
        Stack(size_t sz) :size(sz), tos(0) {data = (T*)malloc(size*sizeof(T));}
        ~Stack() { free(data); }
        void push(T datum) { data [++tos] = datum; }
        T pop(){ return data[tos--]; }
        T top() { return data[tos]; }
        bool full() { return tos >= size - 1;}
};
