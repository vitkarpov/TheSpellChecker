#include "dictionary.h"
#include "error.h"

using namespace std;

Dictionary::Dictionary(const std::string& fname) {
    ifstream wlist(fname.c_str());

    if (!wlist.is_open()) {
        throw ScheckError("Couldn't open dictionary file " + fname);
    }

    std::string word;

    while(getline(wlist, word)) {
        mWords.insert( word );
    }

    if (!wlist.eof()) {
        throw ScheckError("Error reading dictionary file " + fname);
    }
}

bool Dictionary::Check(const std::string& word) const {
    return mWords.find(word) != mWords.end();
}