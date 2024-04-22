//
// Created by Ethan on 4/15/2024.
//
// Constructor
#include "TreeNode.hpp"
#include "GraphNode.hpp"
TreeNode::TreeNode(GraphNode *nNode) : makeNode(nNode), leftSubtree(nullptr), rightSubtree(nullptr) {}

// Getter for left subtree
TreeNode* TreeNode::left() {
    return leftSubtree;
}

// Setter for left subtree
void TreeNode::left(TreeNode *leftPtr) {
    leftSubtree = leftPtr;
}

// Getter for right subtree
TreeNode* TreeNode::right() {
    return rightSubtree;
}

// Setter for right subtree
void TreeNode::right(TreeNode *rightPtr) {
    rightSubtree = rightPtr;
}

// Print the value of this node
void TreeNode::print() {
    if (makeNode != nullptr) {
        std::cout << makeNode->getName() << std::endl;
    }
    else {
        std::cout << "NULL" << std::endl;
    }
}

// Getter for GraphNode pointer
GraphNode* TreeNode::graphNode() {
    return makeNode;
}

GraphNode* TreeNode::graphNode(GraphNode *graphNode) {
    makeNode = graphNode;
    return makeNode;
}