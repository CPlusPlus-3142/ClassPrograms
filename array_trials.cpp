#include <iostream>
#include <cstdint>
using namespace std;

/** 9/15/2025
 * 3 kinds of arrays in C++
 * 1. C-style arrays (when passed to a function DECAYS to a pointer)
 * 2. array class  (std::array) - part of the STL
 *    array<int, 5> arr = {1, 2, 3, 4, 5};
 * 3. vector class (std::vector) - part of the STL
 */
void print_arr(int[], int); // function declaration or prototype
void increment(int x[], int size);

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
    constexpr int SIZE2=2*SIZE;
    int arr2[SIZE2] = {0};
    print_arr(arr2, SIZE);
    increment(arr2, SIZE);
    print_arr(arr2, SIZE);
    return 0;
}
// C-style arrays must be passed with the size
void print_arr(int x[], int size) {
    for (int i=0; i<size; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}
// the following function modifies the values in the array that's passed in
void increment(int x[], int size) {
    cout << "what is the size of the array in the function increment? " << 
    sizeof(x) << endl << " this is the size of an address" << endl;   
    for (int i=0; i<size; i++) {
        x[i]++;
    }
}