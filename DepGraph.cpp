//
// Created by Ethan on 4/14/2024.
//
#include "DepGraph.hpp"
#include "GraphNode.hpp"
#include <algorithm>
Graph::Graph(std::string name) : _fileToMake(name), _targetToMake(""), firstTarget(nullptr), _tree(nullptr) {}

void Graph::print() {



}

void Graph::parseDepGraph() {

    bool isPreviousTokenTab; //flag for knowing if previous token was a tag
    Tokenizer tokenizer(_fileToMake);
    Token token = tokenizer.getToken(isPreviousTokenTab);

    GraphNode* currentTarget = nullptr;

    MakeTree makeTree;

    Graph* graph = nullptr;

    //flags to print either tokens or graph nodes
    bool printToken = false;
    bool printGraphNode = true;
    bool printBST = false;


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




}



void Graph::runMake() {




}

bool Graph::isCyclic() {
    return isCyclic(firstTarget);
}

bool Graph::isCyclic(GraphNode* node) {
    //taken from Graph Algorithms Page on CS355 Canvas
    if(node->numDependentNodes() == 0){
        return false;
    }

    if(node->onPath()){
        return true;
    }

    node->onPath(true);

    for(int dependent = 0; dependent < node->numDependentNodes(); dependent++){
        if(isCyclic(node->dependentNodes()->at(dependent))){
            return true;
        }
    }

    node->onPath(false);
    return false;


}

long Graph::updateTimeStamp(GraphNode * node) {

    if(node->wasMade()){
        return node->getTimestamp();
    }

    if(node->numDependentNodes() == 0){
        std::cerr << "Error, node does not have children\n";
        node->wasMade(true);
        return node->getTimestamp();
    }

    long maxTimestamp = 0;

    for(int dependent = 0; dependent < node->numDependentNodes(); dependent++){
       maxTimestamp = std::max(maxTimestamp, updateTimeStamp(node->dependentNodes()->at(dependent)));
    }

    if(maxTimestamp != 0){
        node->runCommand();
    }




}

