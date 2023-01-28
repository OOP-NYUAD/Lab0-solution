/*Write a program that will count the number of characters, words, and 
lines, in a file. Words are separated by spaces, tabs, or carriage 
return characters. The file name should be entered by the user.*/

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]){
    // example of how argc and argv can be used to provide command line arguments

    if(argc != 2){
        cout << "<Usage>\n\twc <input file>\n";
        exit(-1);
    }
    ifstream inFile;
    inFile.open(argv[1]);

    if(inFile.fail()){
        cout << "wc: Error: file \"" << argv[1] << "\" not found.\n";
        exit(-1);
    }

    char temp;
    int chars = 0, words = 0, lines = 0;

    while(true){
        inFile.get(temp);
        if(inFile.eof()) break;

        chars++;
        if(temp == ' ' || temp == '\t' || temp == '\r') words++;
        else if(temp == '\n'){
            words++; // remember that words are also separated by newline characters
            lines++;
        }
    }  

    cout << "Characters: " << chars << '\n';
    cout << "Words: " << words << '\n';
    cout << "Lines: " << lines << '\n';

    return 0;
}