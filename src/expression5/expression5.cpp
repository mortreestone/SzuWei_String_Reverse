#include "expression5.h"


/* 
The fifth expression of the string reverse is implemented by using a recursive function. 
The function feed in a input string. If the input string has only one element, it will retrun the string.
Otherwise, it will call the function itself again with the input of the substring without the first element.
The it return the return value from the recursive function adding the first element.
After finish the recursive function, the return string is going to be the reverse of the input string.  
*/

string reverse_string5(string input_string)
{
    // string length
    int str_len = input_string.length();

    // if the string is equal to 1 return the string 
    if(str_len <= 1)
        return input_string;

    // if not call the function with input of the substring of the input string without the first element. And return adding the first element. 
    return reverse_string5(input_string.substr(1,str_len-1))+input_string[0];
}