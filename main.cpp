// Title: Rule of Three
// Purpose: Practicing coding with rule of three to avoid memory leak and double free
// Author: Fransiskus Agapa
// Have fun - enjoy the process - practices make improvement

#include "MyClass.h"
#include <iostream>

using std::cout;
using std::endl;

int Test(MyClass locObj)                                             // function to test copy constructor
{
    int sqrt = 0;
    sqrt = locObj.GetVal() * 2;
    return sqrt;
}

int main()
{
    cout << endl;
    int sqrt = 0;                                                      // variable for copy constructor
    MyClass fClass;                                                    // call default constructor
    MyClass sClass;
    MyClass tClass;
    cout << endl << "=Initial Value of 3 objects of class=" << endl;
    cout << "1st object of class has value: " << fClass.GetVal() << endl;
    cout << "2nd object of class has value: " << sClass.GetVal() << endl;
    cout << "3rd object of class has value: " << tClass.GetVal() << endl;
    cout << endl;

    //checking how copy constructor works
    fClass.SetVal(10);
    sqrt = Test(fClass);
    cout << "1st object of class has value: " << fClass.GetVal() << endl;
    cout << "The sqrt value of 1st object of class: " << sqrt  << endl;
    cout << endl;

    // checking how copy assignment operator works
    sClass.SetVal(20);
    tClass = sClass;                                                    // call copy assignment operator
    cout << "2nd object of class has value: " << sClass.GetVal() << endl;
    cout << "3rd object of class has value: " << tClass.GetVal() << endl;
    cout << endl;

    sClass.SetVal(30);                                                // check that updating the value won't affect the other object's value
    cout << "2nd object of class has value: " << sClass.GetVal() << endl;
    cout << "3rd object of class has value: " << tClass.GetVal() << endl;
    cout << endl;

    cout << "=Updated Value of 3 objects of class=" << endl;
    cout << "1st object of class has value: " << fClass.GetVal() << endl;
    cout << "2nd object of class has value: " << sClass.GetVal() << endl;
    cout << "3rd object of class has value: " << tClass.GetVal() << endl;
    cout << endl;

  return 0;
}
