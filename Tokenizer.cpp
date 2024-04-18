//
// Created by Ethan on 4/9/2024.
//


#include "Tokenizer.hpp"
#include <iostream>

Tokenizer::Tokenizer(std::string name):  timestamp{1},
                                         inputFileName{name} {
        inputStream.open(inputFileName, std::ios::in);
}
char Tokenizer::getNextChar() {
    char c;
    inputStream.get(c);
    return c;
}

Token Tokenizer::getToken() {

    Token token(timestamp);

    char c = getNextChar();
    if (inputStream.eof()) {
        token.isEndOfFile() = true;
        return token;
    }else if (c == '\n') {
        token.isEndOfLine() = true;
        return token;
    } else if (c == ':') {
        token.isColon() = true;
        return token;
    } else if (c == '\t') {
        std::string command;
        while ( c != '\n' && !inputStream.eof()) {
            command += c;
            c = getNextChar();
        }
        token.makeCommand(command);
    }else {
        std::string target;

        std::string dependent;

        // Handle non-whitespace characters
        while (c != ':' && c != '\n' && c != '\t' && c != ' ' && !inputStream.eof()) {

            target += c; // Collect characters for target

            c = getNextChar();
        }

        //handle target
        if (c == ':') {
            token.makeTarget(target);
            inputStream.putback(c);
        }else {
            c = getNextChar();
            while (c != ' ' && c != '\n' && !inputStream.eof()) {
                dependent += c;
                c = getNextChar();
            }
            token.makeDepenency(dependent);
            inputStream.putback(c);


        }
    }
    return token;


}








































