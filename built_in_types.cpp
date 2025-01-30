#include <iostream>
#include <cstdint>
/** 1. brace initialization
 *  2. there are many specific types used in C++
 *  3. you can use auto and allow the compiler to deduce the type
 */
int main() {
    int num{ 5 };
    auto num3 = 10;
    double num2{ 5.5 };
    bool isTrue{ true };
    char ch{ 'A' };
    int16_t x;
    int64_t y;
    size_t sz;

    std::cout << "Value of num is: " << num << " num2: " << num2 << " ch: " << ch << std::endl;
    std::cout << "bool prints as an int: " << isTrue << " char ch: "
              << ch <<  std::endl;
    return 0;
}