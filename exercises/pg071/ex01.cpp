#include <iostream>

#define SIZE 10

int main() {

    int  myArray[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // We can compute size from sizeof(myWarray)/sizeof(myArray[0]
    // if we undefine SIZE and omit the SIZE parameter in int myArray[] = ...

    for (int i = 0; i < SIZE; i++) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;
}

