ifndef MY_INTEGER_VECTOR_HPP
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
 #endif