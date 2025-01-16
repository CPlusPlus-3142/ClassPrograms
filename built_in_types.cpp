#include <iostream>

int main() {
    int num{ 5 };
    num = 10;
    double num2{ 5.5 };
    bool isTrue{ true };
    char ch{ 'A' };

    std::cout << "Value of num is: " << num << " num2: " << num2 << " ch: " << ch << std::endl;
    std::cout << "bool prints as an int: " << isTrue << std::endl;
    return 0;
}