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
    Token getToken();

private:
    int timestamp;
    std::string inputFileName;
    std::ifstream inputStream;
};


#endif //CS315_PROJECT4_SPRING24_TOKENIZER_HPP
