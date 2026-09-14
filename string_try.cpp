
#include <iostream>
#include <string>
using namespace std;

void printString(string str) {
  cout << " str's length: " << str.length() << endl;
  cout << " str's first character: " << str[0] << endl;
  str[1] = 'a';
  cout << " str's last character: " << str.at(str.length()-1) << endl;

  cout << " str's second character: " << str[1] << endl;

  string str2="apple", str3="banana";
  string str4{str3}; // initialization
  str4.append("s");
  str4+="s";  // append to str4, same as previous line
  cout << "str4: " << str4 << " str3: " << str3 << endl;
  if (str3<str2) { // do not say .compareTo() as in Java.
    cout << str3 << " comes before " << str2 << endl;
  } else {
    cout << str2 << " comes before " << str3 << endl;
  }    
  string s;
  cout << "length of s: " << s.length() << endl;  
  s=str2;   // string assignment
  cout << "length of s: " << s.length() << endl; 
  s.append("SS");    // will str2 change from this stmt? NO
  cout << "s: " << s << " str2: " << str2 <<  endl;
}
int main() {
  printString("Hello, from a function!"); 
  return 0;
}