#include <iostream>
#include <string>
#include "dictionary.h"
#include "error.h"

using namespace std;

int main()
{
    try {
        Dictionary dictionary("data/dictionary.dat");
        string word;

        while(getline(cin, word)) {
            if (dictionary.Check(word)) {
                cout << word << " is OK" << endl;
            } else {
                cout << word << " is misspelt" << endl;
            }
        }
    } catch(const ScheckError& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    } catch(const std::exception& e) {
        cerr << "Error: unknown exception" << endl;
        return 2;
    }
}