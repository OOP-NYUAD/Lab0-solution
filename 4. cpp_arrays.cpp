#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    /*arrays store variables as contiguous blocks of memory. To declare an array,
    you declare its type (a static array can only store one kind of data) give it
    a name, then give it a size for the array. i.e.*/

    int arr[10];

    /*To initialize arrays, you can provide a list of comma separated values. The
    size of the list must not exceed the size of the array but it can be smaller*/

    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    /*array indicies start at 0 and end at size - 1*/
    cout << arr1[0] << '\n';    // should print 10
    cout << arr1[4] << '\n';    // should print 5
    cout << arr1[10] << '\n';   // does not work as index exceeds array size (might still
                                // work since that memory still belongs to the program)


    /*You can also declare 2D arrays by providing two square brackets and put the size of the 
    array in both dimensions. i.e.*/

    int arr2[5][5]; // this creates a 5x5 matrix holding 25 values.

    /*To initialize 2D arrays, you can provide a list with NxM comma seperated elements.
    Alternatively, you can provide a list of N sublists*/

    int arr3[2][3] = { 1, 2, 3, 4, 5, 6 };
    // OR
    int arr4[2][3] = { {1, 2, 3}, {4, 5, 6} };

    /*2D arrays are still contiguous in memory so the above two are equivalent*/

    return 0;
}