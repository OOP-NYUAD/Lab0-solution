/*The factorial of n (written n!) is the product of the integers between 1 and n.
Thus 4! = 1*2*3*4 = 24. By definition, 0! = 1. Factorial is not defined for 
negative numbers.

Write a program to find factorial of a number. Implement the C++ code using 
a loop*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    u_int num, copy, fact = 1;
    cout << "Provide a positive integer to compute its factorial\n";
    cin >> num;
    copy = num; // just for the final print statment

    while(num != 1) fact *= num--;
    
    cout << copy << "! = " << fact << '\n';
    return 0;
}