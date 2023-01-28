/*4 - A: Write a function to compute Fibonacci number of a non-negative integer. The 
mathematical definition of the Fibonacci number is:
    fib(0) = 0
    fib(1) = 1
    fib(n) = fib(n-1) + fib(n-2)
*/

/*4 - B: Write a function that "returns" more than one value. What the function does
isn't actually important.*/

#include <iostream>

using namespace std;

int fib(u_int num){
    if(num <= 1) return 1;
    else return fib(num - 2) + fib(num - 1);
}

int main(int argc, char *argv[]){
    u_int num = 5;
    cout << "fib(" << num << ") = " << fib(num) << '\n';

    return 0;
}