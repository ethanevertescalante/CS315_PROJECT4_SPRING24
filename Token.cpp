//
// Created by Ethan on 4/9/2024.
//

#include <iostream>
#include "Token.hpp"

Token::Token(std::string nameOfFile): _isTarget{false},
                                      _isDependency{false},
                                      _isCommand{false},
                                      _isEof{false},
                                      _isColon{false},
                                      _isEol{false},
                                      _fileName{""},
                                      _isTab{false} {}


bool& Token::isTarget() { return _isTarget; }
bool& Token::isDependency() { return _isDependency; }
bool& Token::isCommand() { return _isCommand; }

bool& Token::isColon() { return _isColon; }
bool& Token::isTab() { return _isTab; }
bool& Token::isEndOfLine() { return _isEol; }

bool& Token::isEndOfFile() { return _isEof;}

std::string Token::nameOfFile() { return _fileName; }


void Token::makeTarget(std::string fileName) {
    _fileName = fileName;
    isTarget() = true;
}

void Token::makeDepenency(std::string dependents) {
    _fileName = dependents;
    isDependency() = true;

}

void Token::makeCommand(std::string command) {
    _fileName = command;
    isCommand() = true;
}





void Token::print() {

    if(isTarget()){
        std::cout << "this is the target: " << _fileName << std::endl;
    }else if(isColon()){
        std::cout << "Colon is here" << std::endl;
    }else if(isDependency()){
        std::cout << "Dependency: " << _fileName << std::endl;

    }else if(isTab()){
        std::cout << "tab character here" << std::endl;
    }else if(isEndOfLine()){
        std::cout << "Endl here" << std::endl;
    }
    else if(isCommand()){
        std::cout << "this is the Command: " << _fileName << std::endl;
    }else if(isEndOfFile()){
        std::cout << "End of File has been reached." << std::endl;
    }
    else{
        std::cout << "unknown token" << std::endl;
    }






}