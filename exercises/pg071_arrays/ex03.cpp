/* Write a program to create a two-dimensional array of 10 rows and 5 columns
 * and print its elements.
 */

#include <iostream>

#define ROWS 10
#define COLS  5

int main() {

    // Note that Vim doesn't support this indentation; deal with it.
    int  myArray[ROWS][COLS] = { {100, 101, 102, 103, 104},
Cakal, Yasin. Data Structures and Algorithms with C++: 100+ Coding Q&A (Code of Code) (p. 71). Kindle Edition. 
                                 {110, 111, 112, 113, 114},
                                 {120, 121, 122, 123, 124},
                                 {130, 131, 132, 133, 134},
                                 {140, 141, 142, 143, 144},
                                 {150, 151, 152, 153, 154},
                                 {160, 161, 162, 163, 164},
                                 {170, 171, 172, 173, 174},
                                 {180, 181, 182, 183, 184},
                                 {190, 191, 192, 193, 194},
    };

    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            std::cout << myArray[r][c] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

