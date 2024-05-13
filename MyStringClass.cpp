#include "MyStringClass.hpp"
#include <cstring>

MyStringClass::MyStringClass(){
        std::cout<<"MyStringClass::Zero Param C'tor\n";
        len = 0;
        MyStr = new char[1];
        MyStr[0] = '\0';
    }
    
MyStringClass::MyStringClass(char* _MyStr){
    std::cout<<"MyStringClass::Param C'tor\n";
    len = strlen(_MyStr);
    MyStr = new char[len+1];
    strncpy(MyStr , _MyStr , len);
    MyStr[len] = '\0';
}

MyStringClass::~MyStringClass(){
    std::cout<<"MyStringClass::D'tor\n";
    len = 0;
    delete MyStr;
}

void MyStringClass::print(){
    if(len == 0){
        std::cout<<"Empty string!\n";
        return;
    }
    
    std::cout<<"String="<<MyStr<<"\n";
}

