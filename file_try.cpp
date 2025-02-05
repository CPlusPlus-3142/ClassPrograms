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