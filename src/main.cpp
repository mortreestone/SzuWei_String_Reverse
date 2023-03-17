#include <sstream>
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>
#include "expression1/expression1.h"
#include "expression2/expression2.h"
#include "expression3/expression3.h"
#include "expression4/expression4.h"
#include "expression5/expression5.h"

using namespace std;



int main(int arg, char **argv)
{

    // flags for the input
    bool take_file=false; // see if the user provide a text file or not
    bool individual=false; // see if the user want to run the expression individually or all at a one.
    
    // file name
    char *f;

    // expression number
    char *t;
    int n =0;

    // Input and Ouput string declaration
    string str_inputs[5];
    string str_outputs[5];



    // Get optinal arguments including e for expression number and -h for help.
    int opt;
    while ((opt = getopt(arg, argv, "e:h")) != -1) {
    switch (opt) {
    case 'e':
      //set to only run a expression 
      individual = true;
      // expression number
      t=optarg;
      // convert t to int type
      n = atoi(t);

      break;

    // help arguement
    case 'h':
      cout<<"* Enter -h for help.\n\n";
      cout<<"* Enter -e and a number for executing a specific expression individually. \n  For example: Enter -e 2 will only execute the second expression of string reversal\n\n";
      cout<<"* You can also optinally Enter a text file which store all your input strings for each expression line by line. \n  For example: Enter ../string_data_input/String.txt\n\n";
      cout<<"* By default, it executes all different expression of string reversal implementations at once.\n";
      return 1;
      break;
    }
  }


    //If the expression number cannot match, return 
    if(n>5 || n<0)
    {
        cout<< "Sorry, there is no expression " << n << " yet to implement the string reversal.\n";
        return 1;
    }


    // check for and get filename
    if(optind != arg-1)
    {
       take_file=false;
    }
    else
    {
        take_file=true;
        f = argv[optind];
    }


//The user can either provide a text file or just enter string(s) while executing

 if(take_file)
    {
        // open the input string file path
        fstream file;
        file.open(f,ios::in);    
  
        //read the file content into input string
        if(file.is_open())
        {
            int i=0;

            //read each line for different expression's string input
            while(getline(file, str_inputs[i]))
                    i++;
            if(i<5)
            {
                cout<< "Error, the input text file have to contain 5 line \n";  
                return 1;
            }
        }
        else
        {
            // if provide a wrong path, shows the file is not found.
            cout<< "Cannot find" << argv[1] << " \n";
            return 0;
        }
    }
    // if not input a file name, the input the string(s) manually
    else
    {
        if(!individual || n==1)
        {
            cout << "Type the input string for first expression string reversal: ";
            getline (cin, str_inputs[0]);
        }
        if(!individual || n==2 )
        {
            cout << "Type the input string for second expression string reversal: ";
            getline (cin, str_inputs[1]);
        }
        if(!individual || n==3)
        {
            cout << "Type the input string for third expression string reversal: ";
            getline (cin, str_inputs[2]);
        }
        if(!individual || n==4)
        {
            cout << "Type the input string for fourth expression string reversal: ";
            getline (cin, str_inputs[3]);
        }
        if(!individual || n==5)
        {
            cout << "Type the input string for fifth expression string reversal: ";
            getline (cin, str_inputs[4]);
        }
    }




    /////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////implementing each expression of the string reversal/////////////////
    /////////////////////////////////////////////////////////////////////////////////////////


    //////////////////Expression1//////////////////
    if(!individual || n==1){
    
    //call the function
    reverse_string1(str_inputs[0],str_outputs[0]);

    //Print the input and the output string
    cout <<"\nThe first expression input: " <<str_inputs[0] << "\n";
    cout <<"The first expression output: " <<str_outputs[0] << "\n";
    
    }





    /////////////////Expression2///////////////////
    if(!individual || n==2){

    // get the size of the string
    int str_size = str_inputs[1].size();

    // declare a new class
    express2* ex2 = new express2(str_inputs[1],  str_size);
    
    // call the memver function
    ex2->reverse_string();

    // get the result string
    str_outputs[1]= ex2->getstring();
    
    //delete the class
    delete ex2;

    //Print the input and the output string
    cout <<"\nThe second expression input: " <<str_inputs[1] << "\n";
    cout <<"The second expression output: " <<str_outputs[1] << "\n";

    }





    /////////////////Expression3/////////////////
    if(!individual || n==3){
    
    // get the size of the string
    int str_size = str_inputs[2].size();

    // Declare an structure using input3
    mystring ex3 = mystring(str_inputs[2], str_size);

    // running the overloaded operator in ex3
    ~ex3;

    // get the output
    str_outputs[2] = ex3.op_string;


    //Print the input and the output string
    cout <<"\nThe third expression input: " <<str_inputs[2] << "\n";
    cout <<"The third expression output: " <<str_outputs[2] << "\n";
    }





    /////////////////Expression4//////////////////
    if(!individual || n==4){

    //call the fourth expression function implementing lambda
    str_outputs[3]= reverse_string4(str_inputs[3]);

    //Print the input and the output string
    cout <<"\nThe fourth expression input: " <<str_inputs[3] << "\n";
    cout <<"The fourth expression output: " <<str_outputs[3] << "\n";
    
    }



    /////////////////Expression5//////////////////
    if(!individual || n==5){

    //call the fifth expression implementation using recursive function
    str_outputs[4]=reverse_string5(str_inputs[4]);

    //Print the input and the output string
    cout <<"\nThe fifth expression input: " <<str_inputs[4] << "\n";
    cout <<"The fifth expression output: " <<str_outputs[4] << "\n";
    
    }

     return 0;

}
