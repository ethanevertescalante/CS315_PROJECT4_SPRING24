//
// Created by Ethan on 4/14/2024.
//
#include "MakeTree.hpp"


MakeTree::MakeTree() : _root(nullptr) {}

TreeNode* MakeTree::insert(TreeNode* tNode, GraphNode* nNode) {
    // If the current node is null, create a new TreeNode with the given GraphNode
    if (tNode == nullptr) {
        return new TreeNode(nNode);
    }

    if(tNode->graphNode() > nNode){
        tNode->left(insert(tNode->left(), nNode));
    }
    else {
        tNode->right(insert(tNode->right(), nNode));
    }

    return tNode;

}

GraphNode* MakeTree::find(std::string name) {




}

void MakeTree::print(TreeNode* root) {

    //in order printing
    if(root != nullptr){
        print(root->left());
        root->print();
        print(root->right());
    }



}
