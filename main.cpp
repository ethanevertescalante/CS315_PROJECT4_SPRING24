#include<iostream>
#include<cstdlib>
#include<fstream>
#include<cstring>
#include "Tokenizer.hpp"
//#include "DepGraph.hpp"

int main(int argc, const char *argv[] )
{
    if( argc != 2 ) {
        std::cout << "usage: " << argv[0] << " name-of-a-makefile\n";
        exit(1);
    }

    /*
    // creates a Reader and build the dependency graph using the tokens that it returns.
    DepGraph *make = new DepGraph(argv[1]);
    make->parseDepGraph();
    if( make->isCyclic() )  {
        std::cerr << "Input graph has cycles.\n";
        exit(1);
    }
    make->runMake();

     */

    std::ifstream inputStream;
    inputStream.open(argv[1], std::ios::in);    // open for reading
    if( ! inputStream.is_open()) {
        std::cout << "Unable to open " << argv[1] << ". Terminating...";
        std::cout << strerror(errno) << std::endl;
        exit(2);
    }


    inputStream.close();

    Tokenizer tokenizer(argv[1]);
    Token token = tokenizer.getToken();
    // get the first token to start the while loop
    for(int i = 0; i < 3; i++)
    {
        token.print();
        token = tokenizer.getToken();
    }




    return 0;
}

