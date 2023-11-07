#include "vectorint.hpp"
/*
VectorInt::VectorInt(int size) {
    mp_Data = new int[size];
}

VectorInt::~VectorInt() {
    if(mp_Data != nullptr) {
        delete [] mp_Data;
    }
    mp_Data = nullptr;
}*/

//VectorInt::VectorInt(): m_size(0), m_capacity(10), mp_Data(new int[10]) {}

VectorInt::VectorInt(int size) : m_size(size), m_capacity(size * 2), mp_Data(new int[size]) {}

VectorInt::VectorInt(const VectorInt& other) : m_size(other.m_size), m_capacity(other.m_capacity), mp_Data(new int[other.m_capacity]) {
    for (int i = 0; i < m_size; ++i) {
        mp_Data[i] = other.mp_Data[i];
    }
}

VectorInt::~VectorInt() {
    if(mp_Data != nullptr) {
        delete [] mp_Data;
    }
    mp_Data = nullptr;
   
}

void VectorInt::push_back(int value) {
    if (m_size >= m_capacity) {
        int newCapacity = m_capacity * 2;
        int* tmp = new int[newCapacity];
        for (int i = 0; i < m_size; ++i) {
            tmp[i] = mp_Data[i];
        }
        delete[] mp_Data;
        mp_Data = tmp;
        m_capacity = newCapacity;
    }
    mp_Data[m_size++] = value;
}

int VectorInt::at(int index) {
    if (index >= 0 && index < m_size) {
        return mp_Data[index];
    } else {
        // Handle out-of-bounds access here, e.g., throw an exception
        // For simplicity, we'll return -1 to indicate an error.
        return -1;
    }
}

int VectorInt::size() {
    return m_size;
}

int VectorInt::capacity() {
    return m_capacity;}
