/*
    When you need an array-like data structure that offers dynamic resizing,
    you would usually use an Array List.
    An ArrayList is an array that resizes itself as needed while still providing O(1) access.
    A typical implementation is that when the arra is full, the array doubles in size.
    Each resizing takes O(n) time, but happens so rarely that its amortized insertion time is sill O(1)
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> merge(vector<string>& words, vector<string>& more){

    vector<string> sentence; // Define a new vector to return
    for(const string w: words) // Push the original part
        sentence.push_back(w);
    for(const string m: more) // Push the additional part
        sentence.push_back(m);

    return sentence;
}
