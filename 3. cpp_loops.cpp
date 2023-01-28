#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
    int num = 10;
    if(argc > 1) num = stoi(argv[1]);

    // there are 3 kinds of loops in cpp

    // the for loop (most common and is usually used when the number of iterations is known)
    // for(loop counter; loop condition; command executed after each iteration)
    for(int i = 0; i < num; i++){
        cout << (char)(i + 32) << ' ';  // here we see type casting. Take integer value but use it like a character
        if(i + 32 > 126) break;         // here we see a break statement. used to exit a loop.
    }
    cout << '\n';
    /*All loops can be used interchangeably. I will write the same loop twice but in different syntax*/

    int i = 0;
    // while loop (usually used when number of iteration is dependent on a continuously updated condition)
    while(i < num){
        cout << (char)(i + 32) << ' ';
        if(i + 32 > 126) break;
        i++;
    }
    cout << '\n';

    i = 0;
    // do-while loop (used in almost the same conditions as a while loop but when we need at least one iteration)
    do{
        cout << (char)(i + 32) << ' ';
        i++;
        if(i + 32 > 126) break;
    }while(i < num);
    cout << '\n';

    return 0;
}