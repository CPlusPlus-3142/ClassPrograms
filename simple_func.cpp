#include <iostream>
#include <vector>
using namespace std;

// function prototype also called a FUNCTION DECLARATION
// here to satisfy the compiler
void simple();
int sum(int x, int y);  // function prototype

int main() {
    cout << "begin running in main" << endl;
    simple();
    int num1=2, num2=3;
    cout << "adding " << num1 << " and " << num2 << ": " << sum(num1,num2) << endl;
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
// pass by value of an object
int sum(vector<int> v) {
    int sum=0;
    for (int i=0; i<v.size(); i++) {
        sum+=v[i];
        v[i]=0;
    }
    return sum;
}
 