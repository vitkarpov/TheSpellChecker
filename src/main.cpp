#include <iostream>
#include <string>
#include "dictionary.h"

using namespace std;

void invite()
{
    cout << "Enter the word to check: ";
}

int main()
{
    cout << "||T |||h |||e |||       |||S |||p |||e |||l |||l ||\n";
    cout << "||__|||__|||__|||_______|||__|||__|||__|||__|||__||\n";
    cout << "|/__\\|/__\\|/__\\|/_______\\|/__\\|/__\\|/__\\|/__\\|/__\\|\n";
    cout << "____ ____ ____ ____ ____ ____ ____ \n";
    cout << "||C |||h |||e |||c |||k |||e |||r ||\n";
    cout << "||__|||__|||__|||__|||__|||__|||__||\n";
    cout << "|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|\n";

    invite();

    Dictionary dictionary( "data/dictionary.dat" );
    string word;

    while( std::getline( std::cin, word ) ) {
        if ( dictionary.Check( word ) ) {
            cout << word << " is OK\n";
        }
        else {
            cout << word << " is misspelt\n";
        }
        invite();
    }
}