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
    char peek = inputStream.peek();
    if (inputStream.eof()) {
        token.isEndOfFile() = true;
    } else if (c == '\n') {
        token.isEndOfLine() = true;
    } else if (c == ':') {
        token.isColon() = true;
    } else if (c == '\t') {
        token.isTab() = true;
    } else {
        std::string target;
        std::string dependent;
        std::string command;
        std::vector<std::string> dependents;

        // Handle non-whitespace characters
        while (c != ':' && c != '\n' && c != '\t' && c != ' ' && !inputStream.eof()) {

            target += c; // Collect characters for target
            command += c;

            c = getNextChar();
        }

        //handle target
        if (c == ':') {
            token.makeTarget(target);
            inputStream.putback(c);
        }else if (c == ' ') {
            c = getNextChar();
            while (c != '\n' && c != '\t' && !inputStream.eof()) {
                if (c == ' ') { // Skip spaces in dependencies
                    dependents.push_back(dependent); // Add current character to dependencies
                    dependent = "";
                } else {
                    dependent += c;
                }
                c = getNextChar();
            }
            dependents.push_back(dependent);
            token.makeDepenency(dependents);

        } else if (c == '\n') {
            c = getNextChar(); // Move to the next character after '\n'
            while (c != '\t' && c != '\n' && !inputStream.eof()) {
                command += c; // Collect characters for command
                c = getNextChar();
            }
            token.makeCommand(command);
        }
    }
    return token;
}



 /*

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




































