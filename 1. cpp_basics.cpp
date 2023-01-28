/*preprocessor statements go in the beginning of the cpp file
these are parsed by the compiler before any of the actual code
is compiled. These statements are usually instructions for the 
compiler.*/

#include <iostream> // include statement tells the compiler to look in that corresponding library or header

/*namespaces are code organization tools*/
using namespace std; // here we are using the "standard" or std namespace
                     // without this namespace, we would have to preface almost everything with std::<code here>


/*Code execution begins at the main function and, if all goes well, usually exits at the main function
there can only 1 main function per program*/
int main(int argc, char *argv[]){

    /*cpp is a declared type language*/
    int integer;                // 32 bit integer variable 
    char character = 'a';       // 8 bit character variable
    float floating(1.234);      // 32 bit floating point number
    double double_float{5.678}; // 64 bit floating point number

    // data types must always be decalred when making variables

    /*Printing in cpp relies on the iostream library. It has two keywords cout and cin
    they stand for "console out" to print out to the console, and "console in" to take
    input in from the console*/

    cout << "hello world!\n"; // when using cout we use the left arrows <<
    cout << "Could you please give me an integer number?\n";
    cin >> integer; // when using cin we use the right arrows >>

    cout << "You input the integer " << integer << '\n';

    return 0; // when done with code execution, we return 0
}