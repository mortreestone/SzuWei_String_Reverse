#include "expression3.h"

/* 
The third expression of the string reverse is implemented by a overload operator in a structure.
For the overloaded operator, I use ~ operator to do the string reversal in the mystring struct. 
In operator ~, I also uses method of swapping elements to reverse string. However, instead of using swap(),
I hard coded the swap methoed. The result of the reversed string is stored back to the op_string;

Struct Member of mystruct:

op_string: a string that take as a input and output string.

str_size: size of the string.

operator~: a overloaded operator that reverse the string using swap function.

*/


//Struct Constructor 
mystring::mystring(string input_string, int str_size): 
op_string(input_string), str_size(str_size){}



// Create a overloaded operator for the string reversal.
void mystring::operator~()
{
    // half of the string length
    int half_length = str_size/2;
    // instead of using swap function. We hard code it.
    for(int i=0; i<half_length; i++ )
    {
        auto c= op_string[i];
        op_string[i]= op_string[str_size-1-i];
        op_string[str_size-1-i]=c;
    }

} 
 