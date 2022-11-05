#include <iostream>
#include <vector>
#include <string>

#define SIZE 10

using namespace std;


int main(){

    vector<string> msg = {"Hello", "C++", "World!!"};
    for (const string word: msg){
        cout << word << " ";
    }
    cout << endl;

    // string msg[10] = {"Hello", "C++", "World!"};
    // for(const string word: msg)
    //     cout << word << " ";
    // cout << endl; 

    return 0;
}