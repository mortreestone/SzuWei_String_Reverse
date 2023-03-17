#ifndef EXPRESSION3_H_
#define EXPRESSION3_H_

// This is the header file for third expression of the string reversal. 
#include <iostream>
#include <string>
using namespace std;

struct mystring{

    //member of the struct which is a string;
    string op_string; 
    int str_size;

    //constructor function
    mystring(string input_string, int str_size);

    //declare the operator overloading string reversal function using the inverse operator.
    void operator~();
    
};



#endif