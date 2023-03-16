#include "expression1.h"


/* 
The first expression of the string reverse is implemented by a function.
It simply store the original string backward to a return string.
Input: an reference input original string and an reference output return string.
*/


void reverse_string1(string &input, string &return_string)
{

    //get the string length
    int string_length = input.size();

    //Uses a for loop to store the element backward to the ouput string 
    for(int i =0; i < string_length;i++)
    {
        return_string += input[string_length-1-i];
    }

}