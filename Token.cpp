//
// Created by Ethan on 4/9/2024.
//

#include <iostream>
#include "Token.hpp"

Token::Token(int time): _isTarget{false},
                        _isDependency{false},
                        _isCommand{false},
                        _isEof{false},
                        _isColon{false},
                        _isEol{false},
                        _strTarget{""},
                        _strCommand{""},
                        _timestamp{time},
                        _isTab{false} {}


bool& Token::isTarget() { return _isTarget; }
bool& Token::isDependency() { return _isDependency; }
bool& Token::isCommand() { return _isCommand; }

bool& Token::isColon() { return _isColon; }
bool& Token::isTab() { return _isTab; }
bool& Token::isEndOfLine() { return _isEol; }

bool& Token::isEndOfFile() { return _isEof;}

std::string Token::nameOfTarget() { return _strTarget; }
std::string Token::nameOfCommand(){ return _strCommand; }

void Token::makeTarget(std::string fileName) {
    _strTarget = fileName;
    isTarget() = true;
}

void Token::makeCommand(std::string command) {
    _strCommand = command;
    isCommand() = true;
}



void Token::print() {

    if(isTarget()){
        std::cout << "this is the target: " << _strTarget << std::endl;
    }

    if(isCommand()){
        std::cout << "this is the Command: " << _strCommand << std::endl;
    }

    if(isEndOfLine()){
        std::cout << "this is an Endl: " << std::endl;
    }

    if(isColon()){
        std::cout << "this is a Colon: " << std::endl;
    }

    if(isTab()){
        std::cout << "this is a tab: " << std::endl;
    }

    if(isDependency()){
        std::cout << "these are the dependencies: ";

        /*
        while(!dependencyCounter.empty()){
            std::cout << dependencyCounter.front();
            dependencyCounter.pop_back();
        }
        */
    }

    if(isEndOfFile()){
        std::cout << "File is done, ending..." << std::endl;
    }






}