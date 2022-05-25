// Declaration of MyClass

#ifndef C_RULETHREE1_MYCLASS_H
#define C_RULETHREE1_MYCLASS_H


class MyClass
{
private:
    int* _value;
public:
    MyClass();                                  // default constructor
    MyClass(const MyClass& orObj);              // copy constructor
    MyClass& operator=(const MyClass& orObj);   // copy assignment operator=
    ~MyClass();                                 // destructor
    void SetVal(const int& v);
    int GetVal() const;
};


#endif //C_RULETHREE1_MYCLASS_H
