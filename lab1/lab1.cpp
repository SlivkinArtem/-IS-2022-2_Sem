#include <iostream>
#include "announce.h"
#include <complex>
using namespace std;

bool matrix_correction(int m1[][3], int m2[][3]){
    int k = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (m1[i][j] == m2[i][j])
                k++;
        }
    }
    if (k == 3*3)
        return true;
    else
        return false;
}

int main() {
    int x = 2, y = 3, x2 = x, y2 = y;
    swap(&x, &y);
    cout << "swap:" << endl;
    swap2(x2, y2);
    if (x == 3 and x2 == 3 and y == 2 and y2 == 2)
        cout << "TEST SWAP FUNCTION - SWAP FUNCTION IS CORRECT" << endl;
    else
        cout << "TEST SWAP FUNCTION - SWAP FUNCTION IS NOT CORRECT" << endl;
    cout << "" << endl;

    double f = 3.3599, f2 = f;
    cout << "round:" << endl;
    round(&f);
    round2(f2);
    if (f == 4 and f2 == 4)
        cout << "TEST ROUND FUNCTION - ROUND FUNCTION IS CORRECT" << endl;
    else
        cout << "TEST ROUND FUNCTION - ROUND FUNCTION IS NOT CORRECT" << endl;
    cout << "" << endl;

    complex< double > z( 3.0, 2.0 ), z2 = z;
    double n = 4.0, n2 = n;
    cout << "multiplying a complex number by a real number:" << endl;
    multiplication(&z, &n);
    multiplication2(z2, n2);
    if (z == z2)
        cout << "TEST COMPLEX MULTIPLYING FUNCTION - COMPLEX MULTIPLYING FUNCTION IS CORRECT" << endl;
    else
        cout << "TEST COMPLEX MULTIPLYING FUNCTION - COMPLEX MULTIPLYING FUNCTION IS NOT CORRECT" << endl;

    int matrix[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    int matrix2[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    cout<<"\nTranspose Matrix:\n";
    transpose(matrix);
    transpose2(matrix2);
    if (matrix_correction(matrix, matrix2))
        cout << "TEST TRANSPOSE MATRIX FUNCTION - TRANSPOSE MATRIX FUNCTION IS CORRECT" << endl;
    else
        cout << "TEST TRANSPOSE MATRIX FUNCTION - TRANSPOSE MATRIX FUNCTION IS NOT CORRECT" << endl;
    return 0;
}
