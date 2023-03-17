#include "expression4.h"

/* 
The third expression of the string reverse is implemented by using lambda anonymous function.
The revers_string function calls transform() function that take two strings. One forward and the other one backward.
Using lamdba function to store the input string element backwardly to the output string. The reverse string will retrun in the end. 
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