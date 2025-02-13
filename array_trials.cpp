#include <iostream>
#include <cstdint>
using namespace std;

/** 2/13/2025
 * 3 kinds of arrays in C++
 * 1. C-style arrays (when passed to a function DECAYS to a pointer)
 * 2. array class  (std::array) - part of the STL
 *    array<int, 5> arr = {1, 2, 3, 4, 5};
 * 3. vector class (std::vector) - part of the STL
 */
void print_arr(int[], int); // function declaration or prototype

int main() {
    const int SIZE=10;
    int arr[SIZE];
    cout << "in main, arr: " << arr << endl;
    cout << "size of arr: " << sizeof(arr) << endl;
    // this will print UNDEFINED values
    for (int i=0; i<SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // if you want to initialize the array to zero, do this:
    int arr2[SIZE] = {0};
    print_arr(arr, SIZE);
    return 0;
}
// C-style arrays must be passed with the size
void print_arr(int x[], int size) {
    cout << "in the funtion, array x:" << x << endl;
    cout << "size of x: " << sizeof(x) << endl;
    for (int i=0; i<size; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}