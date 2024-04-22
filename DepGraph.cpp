//
// Created by Ethan on 4/14/2024.
//
#include "DepGraph.hpp"
#include "GraphNode.hpp"
#include "systemInterface.hpp"
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
           // currentTarget->setTimestamp(timestampForFile(currentTarget->getName()));
            makeTree.insert(currentTarget);

        } else if (token.isDependency()) {
            GraphNode* dependencyNode = nullptr;
            dependencyNode = new GraphNode(token.nameOfFile());
           // dependencyNode->setTimestamp(timestampForFile(dependencyNode->getName()));
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

    //Graph Traversal
    if(isCyclic(makeTree,makeTree.getRoot()))
    {

        std::cerr << "Input graph has cycles.\n";
        exit(1);

    }
    traverseGraph(makeTree, makeTree.getRoot());


}



void Graph::runMake() {





}


bool Graph::isCyclic(MakeTree makeTree ,TreeNode* node) {
    //taken from Graph Algorithms Page on CS355 Canvas
    if(node->graphNode()->numDependentNodes() == 0){
        return false;
    }

    if(node->graphNode()->onPath()){
        return true;
    }

    node->graphNode()->onPath(true);

    for(int dependent = 0; dependent < node->graphNode()->numDependentNodes(); dependent++){
        if(isCyclic(makeTree, makeTree.find(node->graphNode()->dependentNodes()->at(dependent)->getName()))){
            return true;
        }
    }

    node->graphNode()->onPath(false);
    return false;


}

//TODO::Something with updatedTimeStamp is wrong, find out what it is
long Graph::updateTimeStamp(MakeTree makeTree,TreeNode * node) {
    //taken from Graph Algorithms Page on CS355 Canvas
    if(node->graphNode()->wasMade()){
        return node->graphNode()->getTimestamp();
    }

    if(node->graphNode()->numDependentNodes() == 0){
        node->graphNode()->wasMade(true);
        return node->graphNode()->getTimestamp();
    }

    long maxTimestamp = 0;

    for(int dependent = 0; dependent < node->graphNode()->numDependentNodes(); dependent++){
       maxTimestamp = std::max(maxTimestamp, updateTimeStamp(makeTree, makeTree.find(node->graphNode()->dependentNodes()->at(dependent)->getName())));
    }

    if(maxTimestamp != 0){
        node->graphNode()->runCommand();
    }

    node->graphNode()->setTimestamp(maxTimestamp);
    node->graphNode()->wasMade(true);
    return node->graphNode()->getTimestamp();



}

void Graph::traverseGraph(MakeTree makeTree, TreeNode* node) {
    if(node->graphNode()->isATarget()){

        updateTimeStamp(makeTree,node);


        //long timestamp = node->graphNode()->getTimestamp();
        /*
        for(int dep = 0; dep < node->graphNode()->numDependentNodes(); dep++){

            TreeNode* treeNode = makeTree.find(node->graphNode()->dependentNodes()->at(dep)->getName());
            if(treeNode != nullptr){
                long depTimestamp = node->graphNode()->dependentNodes()->at(dep)->getTimestamp();

                if(timestamp < depTimestamp){
                    updateTimeStamp(node->graphNode());
                }


            }
        }
         */
    }

    if(node->left() != nullptr){
        traverseGraph(makeTree, node->left());
    }
    if(node->right() != nullptr){
        traverseGraph(makeTree, node->right());
    }

   return;



}

