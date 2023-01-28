/*Design a software that prints a menu for the user to select which arithmetic operation
to use (‘a’ for addition, ‘s’ for subtraction, ‘m’ for multiplication, and ‘d’ for 
division. The software prompts the user for two numbers and perform the selected 
arithmetic operation. The software should print “Invalid selection” if the user choices 
any other character.

Example snapshot:
    Press ‘a’ for addition
    Press ‘s’ for subtraction
    Press ‘m’ for multiplication
    Press ‘d’ for division
    
    Your selection is: d
    Give me two numbers to divide:
    5 10
    5/10 = 0.5
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    char selection;
    double op1, op2;

    cout << "Select one of the following options\n";
    cout << "\tPress ‘a’ for addition\n";
    cout << "\tPress ‘s’ for subtraction\n";
    cout << "\tPress ‘m’ for multiplication\n";
    cout << "\tPress ‘d’ for division\n";

    cin >> selection;

    
    switch (selection){
    case 'a': case 'A':
        cout << "Provide two numbers\n";
        cin >> op1 >> op2;

        cout << op1 << " + " << op2 << " = " << op1 + op2 << '\n';
        break;
    case 's': case 'S':
        cout << "Provide two numbers\n";
        cin >> op1 >> op2;

        cout << op1 << " - " << op2 << " = " << op1 - op2 << '\n';
        break;
    case 'm': case 'M':
        cout << "Provide two numbers\n";
        cin >> op1 >> op2;

        cout << op1 << " * " << op2 << " = " << op1 * op2 << '\n';
        break;
    case 'd': case 'D':
        cout << "Provide two numbers\n";
        cin >> op1 >> op2;

        cout << op1 << " / " << op2 << " = " << op1 / op2 << '\n';
        break;
    default:
        cout << "Invalid option.\n";
        break;
    }

    return 0;
}