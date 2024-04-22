#include<iostream>
#include<cstdlib>
#include<fstream>
#include<cstring>
#include "Tokenizer.hpp"
#include "DepGraph.hpp"
#include "GraphNode.hpp"
#include "systemInterface.hpp"
#include "MakeTree.hpp"


int main(int argc, const char *argv[] )
{
    if( argc != 2 ) {
        std::cout << "usage: " << argv[0] << " name-of-a-makefile\n";
        exit(1);
    }


    std::ifstream inputStream;
    inputStream.open(argv[1], std::ios::in);    // open for reading
    if( ! inputStream.is_open()) {
        std::cout << "Unable to open " << argv[1] << ". Terminating...";
        std::cout << strerror(errno) << std::endl;
        exit(2);
    }


    inputStream.close();

    // creates a Reader and build the dependency graph using the tokens that it returns.
    Graph* make = new Graph(argv[1]);
/*

    */
    make->parseDepGraph();

/*
    bool isPreviousTokenTab; //flag for knowing if previous token was a tag
    Tokenizer tokenizer(argv[1]);
    Token token = tokenizer.getToken(isPreviousTokenTab);

    GraphNode* currentTarget = nullptr;

    MakeTree makeTree;

    Graph *make = new Graph(argv[1]);

    //flags to print either tokens or graph nodes
    bool printToken = false;
    bool printGraphNode = false;
    bool printBST = true;


    // get the first token to start the while loop
    while(!token.isEndOfFile()){
        if(printToken) {
            token.print();
        }

        //ask if token was a tag before getting the next token
        if(token.isTab()){
            isPreviousTokenTab = true;
        }else{
            isPreviousTokenTab = false;
        }



        //graph node logic
        if (token.isTarget()) {
            currentTarget = new GraphNode(token.nameOfFile());
            currentTarget->isATarget(true);
            //currentTarget->setTimestamp(timestampForFile(currentTarget->getName()));
            makeTree.insert(currentTarget);
        } else if (token.isDependency()) {
            GraphNode* dependencyNode = nullptr;
            dependencyNode = new GraphNode(token.nameOfFile());
            //dependencyNode->setTimestamp(timestampForFile(dependencyNode->getName()));
            currentTarget->addDependentNode(dependencyNode);

            if(printGraphNode){
                dependencyNode->print();
            }

            makeTree.insert(dependencyNode);

        }else if(token.isCommand()){
            currentTarget->setCommand(token.nameOfFile());
            if(printGraphNode) {
                currentTarget->print();
            }

        }

        //get next token
        token = tokenizer.getToken(isPreviousTokenTab);

    }


    if(printBST){
        makeTree.print();
    }

*/


    return 0;
}

