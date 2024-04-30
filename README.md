# Numeric Base Converter

This is a simple C++ program that converts numbers from one base to another. It supports numeric bases from 2 to 36, using digits 0-9 and A-Z to represent values greater than 9.

## How to Compile

To compile the program, you can use a C++ compiler like g++. Execute the following command in the terminal:

``` bash
g++ -o conversor conversor.cpp
```

This will compile the code and generate an executable named `converter`.

## How to Use

After compiling the program, you can execute it as follows:

``` bash
./conversor
```


The program will prompt you to input a number and its respective bases. It will then convert the number from the first base to the second base and display the result.

### Notes

- All numbers used must be positive.
- The input base (base1) and output base (base2) must be in the range of 2 to 36, inclusive.
- Allowed digits for input are 0-9 and A-Z.
- The program will continue executing until you choose to exit it.