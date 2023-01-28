#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    /*flow control in cpp:
        - if statements
        - switch statements

    These two can be used to control where code execution goes
    */

    // if statements are simple enough

    // if no curly braces exist, the if statement will just take one line of code
    if(argc == 1)
        cout << "You have given no command line arguments\n";

    else if(argc > 1){ // if curly braces are there, the entire block is taken
        cout << "You have entered " << argc - 1 << " command line arguments\n";
        cout << "The last one you eneted was " << argv[argc - 1] << '\n';
    }
    else{ // if -> else if -> else that's how it goes usually
        cout << "It is impossible for you to get here but still...\n";
    }

    /*Another method of flow control is using switch statements, these are abstracted if statements*/

    if(argc > 1){
        switch(argv[1][0]){
            case 'a':
                cout << "command line arg is a.\n";
                break;

            case 'b':
                cout << "command line arg is b.\n";
                break;

            case 'c':
                cout << "command line arg is c.\n";
                break;

            default:
                cout << "Command line arg isn't defined.\n";
        }
    }
    else{
        cout << "You haven't given any command line arguments, so we can't execute the switch statement\n";
    }

    return 0;
}