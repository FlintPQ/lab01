#include <iostream>
#include "functions.h"


//#define TEST1
//#define TEST2
//#define TEST3
//#define TEST4
//#define TEST5
//#define TEST6
//#define TEST7
//#define TEST8


int main() {

    #ifdef TEST1
    int a = 10;
    int b = 3;
    function3(a, b);
    std::cout << a;
    #endif

    #ifdef TEST2
    int a = 10;
    int b = 4;
    function3P(&a, &b);
    std::cout << a;
    #endif

    #ifdef TEST3
    double a = 3.4;
    round(a);
    std::cout << a;
    #endif

    #ifdef TEST4
    double a = 3.4;
    roundP(&a);
    std::cout << a;
    #endif

    #ifdef TEST5
    double a = 10;
    int b = 4;
    reduce_radius(a, b);
    std::cout << a;
    #endif

    #ifdef TEST6
    double a = 10.5;
    int b = 4;
    reduce_radiusP(&a, b);
    std::cout << a;
    #endif

    #ifdef TEST7
    std::vector<std::vector<int>> a = {{1, 2, 3}, {4, 5, 6}};
    transpose_matrix(a);
    for (auto i : a) {
        for (auto j : i){
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }
    #endif

    #ifdef TEST8
    std::vector<std::vector<int>> a = {{1, 2, 3}, {4, 5, 6}};
    transpose_matrixP(&a);
    for (auto i : a) {
        for (auto j : i){
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }
    #endif
}
