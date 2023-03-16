#ifndef EXPRESSION2_H_
#define EXPRESSION2_H_

// This is the header file for second expression of the string reversal. 
#include <iostream>
#include <string>
#include <stdint.h>
using namespace std;

//Class that represents expression2 
class express2{

public: 
    // initiate the class with orignal string
    express2(string orign_str, int str_size);

private:
    // private string for original input and the string length
    string orign_str;
    int str_size;

public:
    // reverse a string function
    void reverse_string();
   
    // return the private string 
    string getstring(){return orign_str;}

    //void update_string(string update_str);

};


#endif