/* Write a program to create a two-dimensional array of 3 rows and 4 columns
 * and print its elements in reverse order.
 */

#include <iostream>

#define ROWS  3
#define COLS  4

int main() {

    // Note that Vim doesn't support this indentation; deal with it.
    int  myArray[ROWS][COLS] = { {100, 101, 102, 103},
                                 {110, 111, 112, 113},
                                 {120, 121, 122, 123},
    };

    for (int r = ROWS - 1; r >= 0; r--) {
        for (int c = COLS - 1; c >= 0; c--) {
            std::cout << myArray[r][c] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

