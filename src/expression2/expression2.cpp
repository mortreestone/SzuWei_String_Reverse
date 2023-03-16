# include"expression2.h"

/* 
The second expression of the string reverse is implemented by a class function.
It swaps between the first half elements and the second half elements in the original input string.
After calling this function the reversal string can be obtain by calling another class function called getstring()  
which will return the string from the class. 

Class member:

orign_str: a string that take as a input and output string.

str_size: size of the string.

reverse_string: a function that reverse the string using swap function.

getstring: a function that return orign_str.
*/


// Initialize the variables for express2 class
express2::express2(string orign_str, int str_size): orign_str(orign_str) , str_size(str_size){};


// body of the string reversal function in expression2. 
void express2::reverse_string()
{
    // half of the string length
    int half_length = str_size/2;
    
    // swaping elements in the string to create the new reversal string 
    for(int i=0; i<half_length; i++ )
    {
        swap(orign_str[i],orign_str[str_size-1-i]);
    }
}
