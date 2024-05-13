#include <iostream>

class MyStringClass{
    char* MyStr;
    size_t len;
    
public:
    MyStringClass();
    MyStringClass(char* _MyStr);
    void print();
    
    ~MyStringClass();
};