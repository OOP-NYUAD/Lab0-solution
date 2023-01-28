#include <iostream>
#include <fstream> // must include the file stream library. responsible for file reads and writes.

using namespace std;

int main(int argc, char *argv[]){
    /*To read from a file, we can open it using an istream (input stream). in
    cpp, the way to do that is to define a stream object like so:*/

    ifstream inFile; // you can name your filestream whatever you want. I typically choose inFile and outFile.
    inFile.open("Name_of_file_goes_here.txt", ios::in); // the ios::in is implicit since we used an istream

    if(inFile.fail()){
        cout << "Something wrong occured when trying to open the file.\n";
        /*Typically, the issue is that the file doesn't exist, which points to the name 
        being misspelled or the extension being missing most of the time.*/

        exit(-1); // exits the program prematurely and returns the indiciated exit code (helps in debugging)
    }

    /*if no error occured, you can now use the inFile object/stream just like how you would use cin
        i.e.
        inFile >> myVariable;
    */
    
    inFile.close(); // good practice to close your files when you are done using them

    /*the process is almost identicial for writing to files*/
    ofstream outFile;
    outFile.open("Name_of_file_goes_here.txt", ios::out); // again, ios::out is implicit since we used ofstream

    if(inFile.fail()){
        cout << "Something wrong occured when trying to open the file.\n";
        /*It's very unlikely that this is triggered. If the file doesn't exist, 
        then one will be created with that name.*/

        exit(-1); // exits the program prematurely and returns the indiciated exit code (helps in debugging)
    }

    /*if no error occured, you can now use the outFile object/stream just like how you would use cout
        i.e.
        outFile << "Hello world will now be written to the file\n";
    */

    outFile.close(); 
    /*when writing to files, calling close() actually saves the file.
    If the file is not closed, it will be created but nothing will be
    written inside it.*/
    return 0;
}