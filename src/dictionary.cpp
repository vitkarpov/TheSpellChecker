#include "dictionary.h"

using namespace std;

Dictionary :: Dictionary( const std::string & fname )
{
    ifstream wlist( fname.c_str() );

    string word;
    while( std::getline( wlist, word ) ) {
        mWords.insert( word );
    }
}

bool Dictionary :: Check( const std::string & word ) const {
    return mWords.find( word ) != mWords.end();
}