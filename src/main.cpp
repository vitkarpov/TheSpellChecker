#include <iostream>
#include <string>
#include "dictionary.h"
#include "error.h"

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

    try {
        Dictionary dictionary( "data/dictionary.dat" );
        string word;

        invite();

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

    catch( const ScheckError & e ) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    catch( const std::exception & e ) {
        cerr << "Error: unknown exception" << endl;
        return 2;
    }
}