#include <iostream>
#include <cstdint>
using namespace std;

/** 1. brace initialization
 *  2. there are many specific types used in C++
 *  3. you can use auto and allow the compiler to deduce the type
 */
void simple(int); // function declaration or prototype

int main() {
    int num{ 5 };
    auto num3 = 10;
    double num2{ 5.5 };
    bool isTrue{ true };
    char ch{ 'A' };
    int16_t x;
    int64_t y;
    size_t sz;


    extern const int size; // somewhere else I defined an int var size
    // and this is only a declaration
    const int SIZE=10;
    int arr[SIZE];

    std::cout << "Value of num is: " << num << " num2: " << num2 << " ch: " << ch << std::endl;
    std::cout << "bool prints as an int: " << isTrue << " char ch: "
              << ch <<  std::endl;
    cout << "# of bytes in a char: " << sizeof(char) << std::endl;
    simple(5);
    return 0;
}
// function definition
void simple(int x) {
    std::cout << x;
}