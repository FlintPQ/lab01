#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>

void function3(int &a, int &b);
void round(double &x);
void reduce_radius(double &a, int b);
void transpose_matrix(std::vector<std::vector<int>> &x);

void function3P(int *a, int *b);
void roundP(int *x);
void reduce_radiusP(double *a, int b);
void transpose_matrixP(std::vector<std::vector<int>> *x);
#endif
