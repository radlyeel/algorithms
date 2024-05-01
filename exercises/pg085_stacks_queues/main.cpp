#include "stack.h"
#include "queue.h"
#include <iostream>

int main() {
    Stack<int> stk((int) 10);
    Queue<int> q((int) 10);

    // The only one of these that is intersting is the last one
  
    /*    Given the following stack: [1, 2, 3, 4], write a function that
     *    removes the top element from the stack. 
     *    Given the following queue: [1, 2, 3, 4], write a function that 
     *    removes the front element from  the queue. 
     *    Given the following stack: [1, 2, 3, 4], write a function that 
     *    adds the element 5 to the top of the stack. 
     *    Given the following queue: [1, 2, 3, 4], write a function that 
     *    adds the element 5 to the back of the queue. 
     *    Given an array of integers, write a function that uses a stack 
     *    to reverse the order of the elements in the array.
     */

   int data[]  =  {1, 2, 3, 4, 5};
   int len = sizeof(data)/sizeof(data[0]);

   for(int i = 0; i < len; i++) {
       std::cout << data[i] << " ";
   }
   std::cout << std::endl;

   for(int i = 0; i < len; i++) {
       stk.push(data[i]);
   }
   for(int i = 0; i < len; i++) {
       data[i] = stk.pop();
   }

   for(int i = 0; i < len; i++) {
       std::cout << data[i] << " ";
   }
   std::cout << std::endl;

    return 0;
}
