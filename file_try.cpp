/* in class we will modify this to read the lines
into an array of type string.
then, in lab 1, you will add functions. */
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
        while (getline(file, line)) { 
            cout << i++ << ": " << line << endl;
        }
        file.close();
    } else {
        cerr << "Error opening file: " << filename << endl;
    }

    return 0;
}