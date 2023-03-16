#include <sstream>
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>


using namespace std;



int main(int arg, char **argv)
{

    // flags for the input
    bool take_file=false; // see if the user provide a text file or not
    
    
    // file name
    char *f;


    // Input string declaration
    string str_input;



    // Get optinal argument including -h for help.
    int opt;
    while ((opt = getopt(arg, argv, "h")) != -1) {
    switch (opt) {
    case 'h':
      cout<<"* Enter -h for help.\n\n";
      cout<<"* You can optinally Enter a text file which store all your input strings for each expression line by line. \n  For example: Enter ../string_data_input/String.txt\n\n";
      cout<<"* Or you can manually enter a string for the input\n";
      return 1;
      break;
    }
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




 if(take_file)
    {
        // open the input string file path
        fstream file;
        file.open(f,ios::in);    
  
        //read the file content into input string
        if(file.is_open())
        {
            int i=0;

            //read each line for string input
            getline(file, str_input);

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
            cout << "Type the input string for first expression string reversal: ";
            getline (cin, str_input);
    }



    cout <<"Input String: " <<str_input << "\n";
     return 0;

}
