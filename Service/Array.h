#ifndef PROGLAB3_ARRAY_H
#define PROGLAB3_ARRAY_H

namespace Service {
    class Array {
    private:
        int len;
        int *ptr;
    public:
        explicit Array(int);

        void setArrayFromDialog();

        bool operator<(const Array &a2) const;

        bool operator>(const Array &a2) const;

        bool operator==(const Array &a2) const;

        bool operator!=(const Array &a2) const;

        Array operator+(Array &a2);

        void printArray(const Array &a);
    };
}

#endif //PROGLAB3_ARRAY_H
