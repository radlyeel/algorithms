/* Write a program to create a two-dimensional array of 5 rows and 3 columns
 * and print its elements in spiral order.
 */

#include <iostream>

#define ROWS  5
#define COLS  3

int main() {

    // Note that Vim doesn't support this indentation; deal with it.
    int  myArray[ROWS][COLS] = { {100, 101, 102},
                                 {110, 111, 112},
                                 {120, 121, 122},
                                 {130, 131, 132},
                                 {140, 141, 142},
    };

    // "Spiral order":
    // 100 101 102 112 122 132 142 141 140 130 120 110 111 121 131
    // A more descriptive form might be
    // "spiral clockwise from 0,0

    if (0) {
    // Print the array in "normal form" for reference
    for(int r = 0; r < ROWS; r++) {
        for(int c = 0; c < COLS; c++) {
            std::cout << myArray[r][c] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    }
   
    //TODO: The exercise is done, but more work is needed on termination logic

    // Print the elements of the array in spiral order      
    int top = 0;
    int right = COLS - 1;
    int bottom = ROWS - 1;
    int left = 0;

    // while there is something left to print
    while (left <= right && top <= bottom) {
        // print the current top row
        for (int c = left; c <= right; c++) {
            std::cout << myArray[top][c] << " ";
        }
        top += 1;
        // if (top == bottom) break;

        // print the right side, 
        for (int r = top; r <= bottom; r++) {
            std::cout << myArray[r][right] << " ";
        }
        right -= 1;
        if (left >= right) break;

        // print the bottom, right to left from the next-to-last column
        for (int c = right; c >= left; c--) {
            std::cout << myArray[bottom][c] << " ";
        }
        bottom -= 1;
        // if (top == bottom) break;

        // print the left  side, bottom up
        for (int r = bottom; r >= top; r--) {
            std::cout << myArray[r][left] << " ";
        }
        left += 1;
        // if (left == right) break;
    }
    //
}
