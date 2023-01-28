#include <iostream>

using namespace std;

/*this is a function prototype. It can be added to tell the compiler that
this function (in this case named foo with a return type of void and input
arguments: char) exists and to look for its definition elsewhere*/
void foo(char *str);

/*To define functions in cpp, the function return type must be specified
to specify the return type, it must be written before the function name:
    int foo() returns an intger
    char foo() returns a character
    ...
    void foo() void means there is no return value
*/


/*What are argc? and argv? They are the number of inputs to the program
and a list of said inputs formatted as strings. Essentially they are
command line arguments*/
int main(int argc, char *argv[]){

    foo(argv[0]);
    
    return 0;
}

void foo(char *str){
    cout << str << '\n';
}
