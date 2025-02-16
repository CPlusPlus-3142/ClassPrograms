#include <fstream>
#include <string>
#include <iostream>
#include <array>
#include <cstdlib>
#include "include/lab2a.h"

using namespace std;

void print(const array<string, ARRSIZE>& names, int numElts) //, string filename)
{   
    /*
    ofstream file(filename);
    if (!file.is_open())
    {
        cerr << "Error opening file: " << filename << endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < names.size(); i++)
    {
        file << names[i] << endl;
    }
    file.close();*/
    cout << "Array: (in print function)" << endl; //  << names;
    // Method 1: for loop
    cout << "[";
    for (int i=0; i<numElts; i++) {
        cout << names[i] << " "; 
    }
    cout << "]" << endl << endl;   
    // Method 2: Range-based for loop (will print all locations in the array)    
    for (string element : names) {
        cout << element << " "; 
    }
    cout << "]" << endl;
}

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int load(array<string, ARRSIZE>& names, string filename)
{
    ifstream file(filename);
    int i = 0;

    if (!file.is_open())
    {
        cerr << "Error opening file: " << filename << endl;
        exit(EXIT_FAILURE);
    }
    while (!file.eof())
    {
        if (i >= names.size())
        {
            cerr << "Array is full" << endl;
            exit(EXIT_FAILURE);
        }
        else
        {
            file >> names[i++];
        }
    }
    cout << "Array in load function: " << endl;
    for (int j = 0; j < i; j++)
    {
        cout << names[j] << " ";
    }
    cout << endl;
    file.close();
    return i;
}

void sort_arr(array<string, ARRSIZE>& names, int numElts) 
{
    for (int i = 0; i < numElts - 1; i++)
    {
        for (int j = i + 1; j < numElts; j++)
        {
            if (names[i] > names[j])
            {
                swap(names[i], names[j]);
            }
        }
    }
}

/***************************************************************************************/
 
int main()
{
    string filename = "./my_file.txt";
   
    // from C-strings:
    //string names[SIZE];

    //int num_elts = load(names, SIZE, filename);
    //sort(names, num_elts);
    //print(names, num_elts, "output.txt");

    array<string, ARRSIZE> names_arr;
    // note: the size of the array is not passed to the load function
    // as it is included in the names_arr object
    int num_elts = load(names_arr, filename);
    // here we pass the num_elts since the array may be partially filled
    // note that with a vector you will not need to pass in the num_elts
    print(names_arr, num_elts); //, "output.txt");
    sort_arr(names_arr, num_elts);
    cout << "After sorting: " << endl;
    print(names_arr, num_elts); 
    return 0;
}
/************************************************************************************** */