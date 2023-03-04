#ifndef PROG_LAB1_ANNOUNCE_H
#define PROG_LAB1_ANNOUNCE_H
#include <complex>
using namespace std;

void swap(int *a, int *b);
void swap2(int &a, int &b);

void round(double *x);
void round2(double &x);

void multiplication(complex< double > *z, double *n);
void multiplication2(complex< double > &z, double &n);

void transpose(int (*A)[3]);
void transpose2(int matrix[][3]);

#endif //PROG_LAB1_ANNOUNCE_H
