//
// Created by Ethan on 4/9/2024.
//

#ifndef CS315_PROJECT4_SPRING24_TOKENIZER_HPP
#define CS315_PROJECT4_SPRING24_TOKENIZER_HPP


#include <string>
#include <fstream>
#include "Token.hpp"


class Tokenizer {

public:
    Tokenizer(std::string name);
    Token getToken(bool isTab);
    char getNextChar();




private:
    std::string _fileName;
    std::string inputFileName;
    std::ifstream inputStream;
};


#endif //CS315_PROJECT4_SPRING24_TOKENIZER_HPP