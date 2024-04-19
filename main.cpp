#include<iostream>
#include<cstdlib>
#include<fstream>
#include<cstring>
#include "Tokenizer.hpp"
//#include "DepGraph.hpp"
#include "GraphNode.hpp"


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


    bool isPreviousTokenTab; //flag for knowing if previous token was a tag
    Tokenizer tokenizer(argv[1]);
    Token token = tokenizer.getToken(isPreviousTokenTab);


    GraphNode graphNode("");
    graphNode = graphNode.readTokens(token);
    graphNode.print();
    // get the first token to start the while loop
    while(!token.isEndOfFile()){
        //token.print();

        //ask if token was a tag before getting the next token
        if(token.isTab()){
            isPreviousTokenTab = true;
        }else{
            isPreviousTokenTab = false;
        }
        //get next token
        token = tokenizer.getToken(isPreviousTokenTab);

        if(token.isTarget() || token.isDependency()) {
            //read the next token
            graphNode.readTokens(token);
            graphNode.print();
        }



    }


    return 0;
}

