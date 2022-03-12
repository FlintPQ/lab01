#include <cmath>
#include "functions.h"

void function3(int &a, int &b){
    if (a > b) {
        a %= b;
    } else {
        b %= a;
    }
}

void round(double &x){
    x = std::round(x);
}

void reduce_radius(double &a, int b){
    a -= b;
}

void transpose_matrix(std::vector<std::vector<int>> &a){
    std::vector<std::vector<int>> b(a[0].size(), std::vector<int> (a.size(), 0));

    for (int i = 0; i < a[0].size(); ++i){
        for (int j = 0; j < a.size(); ++j){
            b[i][j] = a[j][i];
        }
    }
    a = b;
}

void function3P(int *a, int *b){
    if (*a > *b) {
        *a %= *b;
    } else {
        *b %= *a;
    }
}

void roundP(double *x){
    *x = std::round(*x);
}

void reduce_radiusP(double *a, int b){
    *a -= b;
}

void transpose_matrixP(std::vector<std::vector<int>> *a){
    std::vector<std::vector<int>> b((*a)[0].size(), std::vector<int> (a->size(), 0));

    for (int i = 0; i < (*a)[0].size(); ++i){
        for (int j = 0; j < a->size(); ++j){
            b[i][j] = (*a)[j][i];
        }
    }
    *a = b;
}
