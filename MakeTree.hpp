
#ifndef _MakeTree_hpp
#define _MakeTree_hpp

#include<iostream>
#include<string>

#include "TreeNode.hpp"


class MakeTree {
public:
    MakeTree();
    void insert( GraphNode *nNode ) { _root = insert(_root, nNode); }
    TreeNode *find( std::string name );
    void print() { printTraverse(_root); }   // print the tree using in-order traversal
    TreeNode* getRoot() { return _root; }

private:
    TreeNode *insert(TreeNode *tNode, GraphNode *nNode);
    TreeNode* find(TreeNode* tNode, std::string toFind); //helper function
    void printTraverse(TreeNode *root);
    
    TreeNode *_root;
};

#endif
