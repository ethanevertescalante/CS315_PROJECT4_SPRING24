//
// Created by Ethan on 4/9/2024.
//


#include "Tokenizer.hpp"
#include <iostream>

Tokenizer::Tokenizer(std::string name):  _fileName{""},
                                         inputFileName{name} {
    inputStream.open(inputFileName, std::ios::in);
}

char Tokenizer::getNextChar() {
    char c;
    inputStream.get(c);
    return c;
}



Token Tokenizer::getToken(bool isTab) {


    _fileName = "";
    Token token(_fileName);

    char c = getNextChar();
    char peek1 = inputStream.peek();

    while(c == ' '){
        c = getNextChar();
    }


    if (inputStream.eof()) {
        token.isEndOfFile() = true;

    } else if (c == '\n' && peek1 == '\t') { //only getting endl after tab
        token.isEndOfLine() = true;
    } else if (c == ':') {
        token.isColon() = true;
    } else if (c == '\t') {
        token.isTab() = true;
    } else if(isTab){
        while(c != '\n' && !inputStream.eof()){
            _fileName += c;
            c = getNextChar();
        }
        token.makeCommand(_fileName);

    }else{
        //if endl and/or space is at the top of the file
        while(c == '\n' || c == ' ') {
            c = getNextChar();
        }

            //getting file name
            while (c != ':' && c != ' ' && c != '\n') {
                _fileName += c;
                c = getNextChar();
            }

            char peek = inputStream.peek();


            //target, dependency and command logic
            if (c == ':') {
                token.makeTarget(_fileName);
                inputStream.putback(c);
            } else if (c == ' ' || c == '\n') {

                if (c == '\n' && peek == '\t') {
                    token.makeDepenency(_fileName);
                    inputStream.putback(c);
                } else {
                    token.makeDepenency(_fileName);
                }

            }


    }

    return token;


}

