#include <iostream>
#include <vector>
using namespace std;

// function prototype also called a FUNCTION DECLARATION
// here to satisfy the compiler
void simple();
int sum(int x, int y);  // function prototype
int sum(vector<int> v);  // pass by value of an object
void changeValue(int& x);  // pass by reference
void swap(int& x, int& y);  // pass by reference

int main() {
    cout << "begin running in main" << endl;
    simple();
    int num1=2, num2=3;
    cout << "adding " << num1 << " and " << num2 << ": " << sum(num1,num2) << endl;
    changeValue(num1);
    cout << "num1 after changeValue: " << num1 << endl;
    
    swap(num1, num2);
    cout << "num1 after swap: " << num1 << ", num2 after swap: " << num2 << endl;
    vector<int> vec{1,2,3,4,5};
    cout << "sum of vector elements: " << sum(vec) << endl;
    cout << "vector elements after sum: ";
    for (int elt: vec) {
        cout << elt << " ";
    }
    cout << endl;
    
    return 0;
}
// FUNCTION DEFINITION
void simple() {
    cout << "in function simple" << endl;
}
int sum(int x, int y) {
    int sum=x+y;
    x=0;
    y=0;
    return sum;
}   
// pass by reference CHANGES STICK
void changeValue(int& x) {
    x=0;
}
// pass by value of an object
int sum(vector<int> v) {
    int sum=0;
    for (int i=0; i<v.size(); i++) {
        sum+=v[i];
         v[i]=0;
    }
    return sum;
}
void swap(int& x, int& y) {
    int temp=x;
    x=y;
    y=temp;
}   
void swap(string& x, string& y) {
    string temp=x;
    x=y;
    y=temp;
}   
 