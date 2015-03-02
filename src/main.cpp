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