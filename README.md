# Szu-Wei Lin Take Home Assignment - String Reverse

This is the open repository for take home assignment of Utopia Compression interview created by Szu-Wei Lin. The assignment instrouction can be found in [Reverse_a_string.pdf](./Reverse_a_string.pdf). Overall, this project provides 5 different 'expression' of string reversal implementation in C++.

## Overview




## Files and Repository
* [src](./src) : Ropository of the source codes.
* [build](./build) : Reopository for building the project in cmake. 
* [string_data_input](./string_data_input) : Ropository for an example string input text file. 
* [CMakeLists.txt](./CMakeLists.txt): CMake file for building the project. 
* [Reverse_a_string.pdf](./Reverse_a_string.pdf): The instrunction file.


## Getting Started

* Environment: Ubuntu 20.04 LTS 
* Prerequisites: CMake version 3.3

### Building and run the string reversal

Build the string reversal project using CMake. I uses CMake 3.3. 

* Build instruction(only need to run this once): 

```sh
cd build
cmake ..
make
```

* If the code need to be modified. Use these command line to recompile the code:

```sh
cd build
make
```

* To rune the string reversal, enter this command line in the build repository:

```sh
./src/String_Reverse
```

## Input Aurguments/Paramenters


### Input
* The user need to provide the input string after run the code 
```sh
./src/String_Reverse
Type the input string for first expression string reversal: 
```

### Input Text File (Option)
* The user can also provide a text file which store the input string. An example text file can be found at [string_data_input/String.txt](./string_data_input/String.txt). The user can run this command to use this text file as an input:
 ```sh
./src/String_Reverse ../string_data_input/String.txt
```

### Run only one Implementation

* The user can add a argument -e to implement only one specific expression of the string reversal. For example, to only run the second expression implementation of the string reversal, user can run the command line below: 

 ```sh
./src/String_Reverse -e 2
```

### Help
* The terminal will provide help instructions whe run with this arguement:
 ```sh
./src/String_Reverse -h
```
