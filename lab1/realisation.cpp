#include "announce.h"

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void swap2(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}


void round(double *x){
    if (*x >= int(*x) + 0.5) *x = int(*x);
    else *x = int(*x)+1;
}

void round2(double &x){
    if (x >= int(x) + 0.5) x = int(x);
    else x = int(x)+1;
}


void multiplication(complex< double > *z, double *n){
    *z = *z * *n;
}

void multiplication2(complex< double > &z, double &n){
    z = z * n;
}


void transpose(int (*A)[3]){
    int B[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            B[i][j] = A[j][i];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            A[i][j] = B[i][j];
}

void transpose2(int matrix[][3]) //либо int matrix[][3], либо int (*matrix)[3]
{
    int t;
    for(int i = 0; i < 3; ++i)
    {
        for(int j = i; j < 3; ++j)
        {
            t = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = t;
        }
    }
}
