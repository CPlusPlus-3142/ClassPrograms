/**
 * possible lab 2:
 * i can assert that the vector returned==list == std:array
 * modify this to:
 * 1. read names into an array
 * 2. read names into a vector
 * 3. read names into a list
 * 4. sort each of these containers
 */
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
    string filename = "my_file.txt"; 
    ifstream file(filename); 
    int i=1;

    if (file.is_open()) {
        string line;
        while (file>>line) {  //  (getline(file, line)) { 
            cout << i++ << ": " << line << endl;
        }
        file.close();
    } else {
        cerr << "Error opening file: " << filename << endl;
    }

    return 0;
}