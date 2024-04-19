//
// Created by Ethan on 4/9/2024.
//

#ifndef CS315_PROJECT4_SPRING24_TOKEN_HPP
#define CS315_PROJECT4_SPRING24_TOKEN_HPP

#include <string>
#include <vector>

class Token {
public:
    //would the token just have a timestamp int?
    Token(std::string NameOfFile);

    //flags
    bool &isTarget(); //example:: 'main.x:' is a target (notice the ending limiter is a colon ':')
    bool &isDependency(); //example:: ': main.o graph.o reader.o' is a Dependency (notice the colon comes before the dependencies)
    bool &isCommand(); // example:: '   touch main.o' (notice the \t (tab character) before the command)
    bool &isEndOfFile();

    //supplemental flags
    bool &isColon();
    bool &isTab();
    bool &isEndOfLine();


    std::string nameOfFile();


    void makeTarget(std::string fileName);
    void makeDepenency(std::string dependency);
    void makeCommand(std::string command);
    void print();


private:
    bool _isTarget = false, _isDependency = false, _isCommand = false,
            _isEof = false, _isEol = false, _isColon = false, _isTab = false;

    std::string _fileName;


};


#endif //CS315_PROJECT4_SPRING24_TOKEN_HPP