#include "vector.hpp"

Vector::Vector(int size ){
    p_Data = new int [size];
}

Vector::Vector(int size ){
    if(p_Data != nullptr){
        delete [] p_Data;
    } p_Data = nullptr;
}

