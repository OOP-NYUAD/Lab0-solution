/*Write a C++ function <bool CopyFile(string , string);> that prompts the 
user to input the name of an input file and the name for an output file. 
The function will copy the contents of the input file into the output 
file, and print an acknowledgment to the user.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool CopyFile(string in, string out){
    ifstream inFile;
    inFile.open(in);

    if(inFile.fail()){
        cout << "copy: Error: file \"" << in << "\" not found.\n";
        return false;
    }

    ofstream outFile;
    outFile.open(out);

    char temp;

    while(true){
        inFile.get(temp);
        if(inFile.eof()) break;
        outFile << temp;
    }

    return true;
}

int main(int argc, char *argv[]){
    if(argc != 3){
        cout << "<Usage>\n\tcopy <input file> <output file>\n";
        exit(-1);
    }

    if(CopyFile(argv[1], argv[2]))
        cout << "File copied successfully.\n";
    
    else
        cout << "Error occured.\n";

    return 0;
}