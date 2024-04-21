//
// Created by Ethan on 4/14/2024.
//
#include "MakeTree.hpp"
#include "GraphNode.hpp"

MakeTree::MakeTree() : _root(nullptr) {}

TreeNode* MakeTree::insert(TreeNode* tNode, GraphNode* nNode) {
    // If the current node is null, create a new TreeNode with the given GraphNode
    if (tNode == nullptr) {
        return new TreeNode(nNode);
    }

    //Duplicate Checker
    if(find(nNode->getName()) != nullptr) {
        return tNode;

    }else if (tNode->graphNode()->getName() < nNode->getName()) {
        tNode->right(insert(tNode->right(), nNode));
    } else {
        tNode->left(insert(tNode->left(), nNode));
    }


    return tNode;

}

GraphNode* MakeTree::find(std::string name) {
    return find(_root, name);

}

GraphNode *MakeTree::find(TreeNode *tNode, std::string toFind) {

    if(tNode == nullptr){
        return nullptr;
    }else if(tNode->graphNode()->getName() == toFind){
        return tNode->graphNode();
    }else if(tNode->graphNode()->getName() < toFind){
        return find(tNode->right(), toFind);
    }else if(tNode->graphNode()->getName() > toFind) {
        return find(tNode->left(), toFind);
    }




}


void MakeTree::print(TreeNode* root) {
    //order traversal
    bool preOrder = true;
    bool inOrder = false;
    bool postOrder = false;


    if(preOrder) {

        if (root != nullptr) {
            root->print();
            print(root->left());
            print(root->right());
        }
    }

    if(inOrder) {

        if (root != nullptr) {

            print(root->left());
            root->print();
            print(root->right());
        }
    }

    if(postOrder) {

        if (root != nullptr) {

            print(root->left());
            print(root->right());
            root->print();
        }
    }




}
