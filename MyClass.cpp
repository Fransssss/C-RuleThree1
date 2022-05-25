// Implementation of MyClass

#include "MyClass.h"
#include <iostream>

using std::cout;
using std::endl;

MyClass::MyClass()
{
    cout << "[Default Constructor Called]" << endl;
    _value = new int;                // dynamically create space/memory before assign a value
    *_value = 0;
}

MyClass::MyClass(const MyClass &orObj)
{
    cout << "[Copy Constructor Called]" << endl;
    _value = new int;               // dynamically create space/memory before assign a value
    *_value = *(orObj._value);      // assign data member to value in parameter
}

MyClass& MyClass::operator=(const MyClass &orObj)
        {
            cout << "[Copy Assignment Called]" << endl;
            if(this != &orObj)      // make sure the object is different
            {
                delete _value;       // delete/free old object
                _value = new int;    // dynamically create space/memory before assign a value
                *_value = *(orObj._value);
            }
            return *this;           // return the updated value of data member
        }

MyClass::~MyClass()
{
    cout << "[Destructor Called]" << endl;
    delete _value;                 // every dynamic memory has to be deleted to avoid memory leak and double delete/free
}

void MyClass::SetVal(const int &v)
{
    cout << "[Set a value]" << endl;
    *_value = v;
}

int MyClass::GetVal() const
{
    return *_value;
}