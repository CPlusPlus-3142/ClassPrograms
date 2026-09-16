#include <iostream>
#include <vector>
using namespace std;
/************
 * Passing a C-Style array to a function.
 * What gets passed? Address of the array (kind of like automatic
 * pass by reference).
 * 
 * 1. You must pass in the size since the function does not know the size of the array.
 * 2. Changes stick.
 */
int sum(const vector<int>& v); // const reference parameter  
void swap(int& x, int& y);  
void clearArray(int arr[], int size); 

int main() {
    cout << "begin running in main" << endl;
    int num1=2, num2=3;
    const int SIZE=5;
    int arr[SIZE]{1,2,3,4,5}; // c-style array is NOT an object
    // you can never say arr.length or any DOT
    vector<int> vec{1,2,3,4,5}; // vector object
    cout << "sum of array elements: " << sum(vec) << endl;
    clearArray(arr, SIZE); // clear the array
    cout << "array elements after clearArray: ";
    // range based for loop can only be used on a C-style array
    // in the function in which it is declared.
    // It cannot be used in a function that accepts the array
    // as a parameter.
    for (int elt: arr) {
        cout << elt << " ";
    }   
    cout << endl;
    return 0;
}
// safety + efficiency: pass by const reference to avoid copying and to prevent modification of the original vector
int sum(const vector<int>& v) {
    int sum=0;
    for (int i=0; i<v.size(); i++) {
        sum+=v[i];
    }
    //v[2]=0;  // This line will cause a compilation error because v is const
    return sum;
}
void clearArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        arr[i]=0;
    }
}