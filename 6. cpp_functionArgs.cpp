#include <iostream>

using namespace std;

// arguments are passed by value
void doesntChangeArgs(int arg1, int arg2){
    arg1++;
    arg2++;
}

// arguments are passed by reference
void changesArgs(int &arg1, int &arg2){
    arg1++;
    arg2++;
}

int main(int argc, char *argv[]){
    int arg1 = 5;
    int arg2 = 6;

    cout << "Before calling function(s):\n" << "arg1 = " << arg1 << ". arg1 = " << arg2 << "\n\n";

    doesntChangeArgs(arg1, arg2);
    cout << "After passing by value:\n" << "arg1 = " << arg1 << ". arg1 = " << arg2 << "\n\n";

    changesArgs(arg1, arg2);
    cout << "After passing by reference:\n" << "arg1 = " << arg1 << ". arg1 = " << arg2 << "\n\n";

    return 0;
}