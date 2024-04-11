//
// Created by Ethan on 4/9/2024.
//


#include "Tokenizer.hpp"
#include <iostream>

Tokenizer::Tokenizer(std::string name):  timestamp{1},
                                         inputFileName{name} {
        inputStream.open(inputFileName, std::ios::in);
}

Token Tokenizer::getToken() {


    if (!inputStream.is_open()) {
        std::cout << "Tokenizer::getToken() called with a stream that is not open." << std::endl;
        std::cout << "Make sure that " << inputFileName << " exists and is readable. Terminating.";
        exit(2);
    }

    //declarations that will be used in the following if statement
    char peekingChar = inputStream.peek(); //to look at next character
    char carryingChar; //houses current character
    std::string targetName;
    std::string commandName;

    char endl = '\n';
    char tab = '\t';
    char colon = ':';

    Token token(timestamp);
    if (inputStream.eof()) {
        token.isEndOfFile() = true;
    }


        inputStream.get(carryingChar);
        while (carryingChar != colon && !token.isColon()) {
            targetName += carryingChar;
            inputStream.get(carryingChar);

            if (carryingChar == colon) {
                token.makeTarget(targetName);
                inputStream.putback(carryingChar);
                return token;
            }

        }


        if (carryingChar == colon) {
            token.isColon() = true;
        }

        if (carryingChar == endl) {

            token.isEndOfLine() = true;
        }

        if (carryingChar == tab) {
            token.isTab() = true;
        }







/*
    while(carryingChar != endl) {

         *
         *
         * dependencies
         *
         *
         *

    }
*/




    return token;

}















