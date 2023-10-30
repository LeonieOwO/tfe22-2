#include <fmt/chrono.h>
#include <fmt/format.h>
/*
#ifndef MY_INTEGER_VECTOR_HPP
#define MY_INTEGER_VECTOR_HPP*/


   class Vector
{
    /*std::vector<int>foo(42);
    foo[34] = 4711;
    struct linkedList{
        LinkedList* pNext;
        int data;

    };*/
    public:
    Vector(int size)/*{
    pData = new int [size];
    }*/;
    ~Vector();

    private:
    int m_size;
    int* pData;
};


auto main(int argc, char **argv) -> int
{
    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, World!\n");

    /* INSERT YOUR CODE HERE */

 
/*
vVector(){
delete[] pData;
}

at(index, value){

}at(index)
*/

    Vector data(20);

    return 0; /* exit gracefully*/
}
