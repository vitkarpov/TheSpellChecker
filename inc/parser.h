#ifndef INC_SCHECK_PARSER_H
#define INC_SCHECK_PARSER_H

#include <string>
#include <iostream>

class Parser {
public:
    Parser(std:istream& is);
    std::string NextWord()
    int LineNo() const;
    std::string Context() const;
};

#endif