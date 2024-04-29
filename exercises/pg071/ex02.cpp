#include <iostream>

#define SIZE 10

int main() {

    int * myArray = new int[SIZE] { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    for (int i = 0; i < SIZE; i++) {
        std::cout << myArray[i] << " ";
    }

    std::cout << std::endl;
}

