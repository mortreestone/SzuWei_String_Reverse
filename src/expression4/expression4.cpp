#include "expression4.h"

/* 
The fourth expression of the string reverse is implemented by using lambda anonymous function. 
In the revers_string function, it calls transform() function that take two strings. 
Using lamdba function to store the input string element backwardly to the output string. 
The reverse string will retrun in the end. 
*/


string reverse_string4(const string  input_string)
{

    // copy string from input
    string output_string = input_string;        

    // Using the transform() function for the string and using lumbda function to do the string reversal.  
    transform(input_string.begin(),input_string.end(),output_string.rbegin(), 
    [](char a){return a;});

    // return the revesed result
    return output_string;
}