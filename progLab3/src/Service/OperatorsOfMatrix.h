#ifndef PROGLAB3_OPERATORSOFMATRIX_H
#define PROGLAB3_OPERATORSOFMATRIX_H
#include "iostream"
#include "ostream"

namespace Service {
    class Matrix{
//        friend std::ostream& operator<<(std::ostream & output, const Matrix & rhs);  // to output the values of the array
    private:
        int rowN, colN;
        float* data;
    public:
        Matrix();
        Matrix(const int rN,const int cN );
        Matrix(const Matrix &srcMatrix );
        Matrix(const int rN, const int cN, float *srcPtr);
        //const float *getData()const;
        int getRowN()const;
        int getColN()const;
        void print()const;
        Matrix transpose();
        Matrix operator+(const Matrix &rhsMatrix)const;
        Matrix operator-(const Matrix &rhsMatrix)const;
        Matrix operator*(const Matrix &rhsMatrix)const;
        float operator()(const int r,const int c)const;
        float& operator[](int ind);
        float operator[](int ind) const;
        Matrix& operator=(const Matrix &rhsMatrix);
        Matrix& operator+=(const Matrix &rhsMatrix);
        Matrix& operator-=(const Matrix &rhsMatrix);
        Matrix& operator*=(const Matrix &rhsMatrix);
        int operator==(const Matrix &rhsMatrix)const;
        int operator!=(const Matrix &rhsMatrix)const;
    };
}

#endif //PROGLAB3_OPERATORSOFMATRIX_H
