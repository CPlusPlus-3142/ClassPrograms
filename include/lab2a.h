#ifndef LAB2a_H // Include guard to prevent multiple inclusions
#define LAB2a_H

#include <string>
#include <array>
using namespace std;

const size_t ARRSIZE = 100;
void print(const array<string, ARRSIZE>& names, int numElts);
int load(array<string, ARRSIZE>& names, string filename);
void sort_arr(array<string, ARRSIZE>& names, int numElts);    
template <typename T>
void swap(T& a, T& b);

#endif