
#ifndef _Graph_hpp
#define _Graph_hpp

#include<iostream>
#include<cstring>

#include "MakeTree.hpp"



class Graph {
public:
    Graph( std::string name );
    void print();
    void parseDepGraph();
    void runMake();
    bool isCyclic();

private:
    bool isCyclic(MakeTree makeTree,TreeNode * treeNode);
    long updateTimeStamp(MakeTree makeTree ,TreeNode * treeNode);
    void traverseGraph(MakeTree makeTree, TreeNode* node);

private:
    std::string _fileToMake, _targetToMake;
    GraphNode *firstTarget;
    MakeTree *_tree;  // MakeTree implements a binary-search tree similar to BinSearchTree
};

#endif
