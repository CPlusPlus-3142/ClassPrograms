
#include <iostream>
#include <string>
using namespace std;

void printString(string str) {
  cout << " str's length: " << str.length() << endl;
  cout << " str's first character: " << str[0] << endl;
  cout << " str's last character: " << str.at(str.length()+2) << endl;

  string str2="apple", str3="banana";
  if (str3<str2) {
    cout << "banana comes before apple" << endl;
  } else {
    cout << "apple comes before banana" << endl;
  }             
}

int main() {
  printString("Hello, from a function!"); 
  return 0;
}