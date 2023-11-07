#ifndef MY_INTEGER_VECTOR_HPP
#define MY_INTEGER_VECTOR_HPP

class VectorInt {
public:
    VectorInt(int size);
    VectorInt(const VectorInt& other);  // Copy constructor
    ~VectorInt();

    
    void push_back(int value);
    int at(int index);
    int size();
    int capacity();
private:
    int m_size;
    int* mp_Data;
    int m_capacity;
};
/*
int *mp-Data;
int m-size(42);
resize(10);
int *tmp = new[10];
delete [] mp-Data;
mp-Data = tmp;

//pushback
mp-Data;
push_back(23);
int m-size = m-size +1;
int *tmp = new[m-size];
copy mp-Data -> tmp;
tmp[size-1] = 23;
capacity
*/

#endif
