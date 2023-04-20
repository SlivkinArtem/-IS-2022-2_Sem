#include "OperatorsOfMatrix.h"
#include "iostream"
#include "ostream"


Service::Matrix::Matrix() {
    this->rowN = 1;
    this->colN = 1;
    this->data = 0;
}

Service::Matrix::Matrix(const int rN,const int cN) {
    this->rowN = rN;
    this->colN = cN;
    data = new float[rN*cN];
    int x = 0;
    for (int i = 0; i < rowN; i++) {
        for(int j = 0; j < colN; j++) {
            this->data[i * colN + j] = 0;
        }
    }
}

Service::Matrix::Matrix(const Matrix &srcMatrix) {
    this->rowN = srcMatrix.rowN;
    this->colN = srcMatrix.colN;
    data = new float(rowN*colN);
    int len = rowN*colN;
    int i=0;
    while(i<len) {
        this->data[i] = srcMatrix.data[i];
        i++;
    }
}

Service::Matrix::Matrix(const int rN, const int cN, float *srcPtr) {
    this->rowN = rN;
    this->colN = cN;
    data = new float[rN*cN];
    for (int i=0; i<rowN; i++) {
        for(int j=0; j<colN; j++) {
            data[i*colN + j] = srcPtr[i*colN + j];
        }
    }
}

int Service::Matrix::getRowN() const {
    return this->rowN;
}

int Service::Matrix::getColN()const {
    return this->colN;
}

std::ostream& operator << (std::ostream &output, const Service::Matrix & rhs) {
    for (int i=0; i<rhs.rowN; i++) {
        for(int j=0; j<rhs.colN; j++)
        {
            output << rhs.data[i*rhs.colN + j] << " ";
        }
    }
    output << std::endl;
    return output;
}

void Service::Matrix::print()const
{
    for (int i=0; i<rowN; i++)
    {
        for(int j=0; j<colN; j++)
        {
            std::cout << this->data[i*colN + j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

Service::Matrix Service::Matrix::transpose() {
    int a = 0;
    float temp;
    Matrix m(colN, rowN);
    for (int i = 0; i < colN; ++i) {
        for (int j = 0; j < rowN; ++j) {
            m.data[a] = data[j * colN + i];
            a++;
        }
    }
    return m;
}

Service::Matrix Service::Matrix::operator+(const Matrix &rhsMatrix) const {
    Matrix temp(rowN,colN);
    if(rowN == rhsMatrix.rowN && colN == rhsMatrix.colN) {
        for (int i=0; i<rowN; i++) {
            for(int j=0; j<colN; j++) {
                temp.data[i*colN + j]= data[i*colN + j] + rhsMatrix[i*colN + j];
            }
        }
    }
    return temp;
}

Service::Matrix Service::Matrix::operator-(const Matrix &rhsMatrix)const {
    Matrix temp(rowN,colN);
    if(rowN == rhsMatrix.rowN && colN == rhsMatrix.colN) {
        for (int i=0; i<rowN; i++) {
            for(int j=0; j<colN; j++) {
                temp.data[i*colN + j]= data[i*colN + j] - rhsMatrix[i*colN + j];
            }
        }
    }
    return temp;
}

Service::Matrix Service::Matrix::operator*(const Matrix &rhsMatrix)const {
    Matrix temp(rowN,colN);
    if(rowN == rhsMatrix.rowN && colN == rhsMatrix.colN) {
        for (int i=0; i<rowN; i++) {
            for(int j=0; j<colN; j++) {
                temp.data[i*colN + j]= data[i*colN + j] * rhsMatrix[i*colN + j];
            }
        }
    }
    return temp;
}

float Service::Matrix::operator()(const int r,const int c)const {
    return data[r*colN + c];
}

float& Service::Matrix::operator[](int ind) {
    return data[ind];
}

float Service::Matrix::operator[](int ind)const {
    return data[ind];
}

Service::Matrix& Service::Matrix::operator=(const Matrix &rhsMatrix) {
    this->rowN = rhsMatrix.rowN;
    this->colN = rhsMatrix.colN;
    data = new float[rowN*colN];
    for (int i=0; i<rowN; i++) {
        for(int j=0; j<colN; j++) {
            this->data[i*colN + j] = rhsMatrix.data[i*colN + j];
        }
    }
    return *this;
}

Service::Matrix& Service::Matrix::operator+=(const Matrix &rhsMatrix) {
    for (int i=0; i<rowN; i++) {
        for(int j=0; j<colN; j++) {
            data[i*colN + j] +=  rhsMatrix[i*colN + j];
        }
    }
    return *this;
}

Service::Matrix& Service::Matrix::operator-=(const Matrix &rhsMatrix) {
    for (int i=0; i<rowN; i++) {
        for(int j=0; j<colN; j++) {
            data[i*colN + j] -=  rhsMatrix[i*colN + j];
        }
    }
    return *this;
}

Service::Matrix& Service::Matrix::operator*=(const Matrix &rhsMatrix) {
    for (int i=0; i<rowN; i++) {
        for(int j=0; j<colN; j++) {
            data[i*colN + j] *=  rhsMatrix[i*colN + j];
        }
    }
    return *this;
}

int Service::Matrix::operator==(const Matrix &rhsMatrix)const {
    int isSame = 0;
    if(rowN == rhsMatrix.rowN && colN == rhsMatrix.colN) {
        isSame = 1;
        for (int i=0; i<rowN; i++) {
            for(int j=0; j<colN; j++) {
                if(data[i*colN + j] != rhsMatrix[i*colN + j]) {
                    isSame = 0;
                }
            }
        }
    }
    return isSame;
}
int Service::Matrix::operator!=(const Matrix &rhsMatrix)const {
    int isDiff = 0;
    if(rowN != rhsMatrix.rowN || colN != rhsMatrix.colN) {
        isDiff = 1;
    }
    else if (rowN == rhsMatrix.rowN && colN == rhsMatrix.colN) {
        for (int i=0; i<rowN; i++) {
            for(int j=0; j<colN; j++) {
                if(data[i*colN + j] != rhsMatrix[i*colN + j]) {
                    isDiff = 1;
                }
            }
        }
    }
    return isDiff;
}
