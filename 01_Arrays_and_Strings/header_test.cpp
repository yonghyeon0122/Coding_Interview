/*
    Header file test
*/
#include "header.h"

int main(){

    vector<string> orig = {"A", "B", "C", "D", "E", "F", "G"};
    vector<string> more = {"1", "2", "3", "4", "5", "6", "7"};
    vector<string> merged = merge(orig, more);    

    for (const string o: orig)
        cout << o << " ";
    cout << endl;

    for (const string m: more)
        cout << m << " ";
    cout << endl;

    for (const string m: merged)
        cout << m << " ";
    cout << endl;



    return 0;
}