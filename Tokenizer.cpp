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


    if(isalpha(carryingChar)) {
        //getting Target
        while (carryingChar != colon) {
            targetName += carryingChar;
            inputStream.get(carryingChar);

        }

        token.makeTarget(targetName);
    }

    if(carryingChar == colon){
        token.isColon() = true;
    }

    /*
     *
     *
     * dependencies
     *
     *
     *
     */

    if(peekingChar == endl){
        token.isColon() = false;
        token.isEndOfLine() = true;
        inputStream.get(carryingChar);


        if(peekingChar == tab){
            token.isEndOfLine() = false;
            token.isTab() = true;
            getline(inputStream, commandName);
            token.makeCommand(commandName);

        }
    }





    return token;

}















