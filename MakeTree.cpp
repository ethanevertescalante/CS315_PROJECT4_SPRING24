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

        //if there is a target with the same name as something already in the binary tree
        //then swap the graphNodes, mostly for easier traversal in the DepGraph
        //Both the target and the dependent will have the same timestamp
        if(nNode->isATarget()){
            find(nNode->getName())->graphNode(nNode);
        }

        return tNode;

    }else if (tNode->graphNode()->getName() < nNode->getName()) {
        tNode->right(insert(tNode->right(), nNode));
    } else {
        tNode->left(insert(tNode->left(), nNode));
    }


    return tNode;

}

TreeNode* MakeTree::find(std::string name) {
    return find(_root, name);

}

TreeNode *MakeTree::find(TreeNode *tNode, std::string toFind) {

    if(tNode == nullptr) {
        return nullptr;
    }if(tNode->graphNode()->getName() == toFind){
        return tNode;
    }else if(tNode->graphNode()->getName() < toFind){
        return find(tNode->right(), toFind);
    }else if(tNode->graphNode()->getName() > toFind) {
        return find(tNode->left(), toFind);
    }

    return tNode;
}


void MakeTree::printTraverse(TreeNode* root) {
    //order traversal
    bool preOrder = true;
    bool inOrder = false;
    bool postOrder = false;
    bool print = false;


    if(preOrder) {

        if (root != nullptr) {
            if(print) {
            root->print();

                std::cout << "Target: " << root->graphNode()->isATarget() << " ";
                std::cout << "DepNodes: " << root->graphNode()->numDependentNodes();
                std::cout << std::endl;
            }
            printTraverse(root->left());
            printTraverse(root->right());
        }
    }

    if(inOrder) {

        if (root != nullptr) {

            printTraverse(root->left());
            root->print();
            if(print) {
                std::cout << "Target: " << root->graphNode()->isATarget() << " ";
                std::cout << "DepNodes: " << root->graphNode()->numDependentNodes();
                std::cout << std::endl;
            }
            printTraverse(root->right());
        }
    }

    if(postOrder) {

        if (root != nullptr) {

            printTraverse(root->left());
            printTraverse(root->right());
            root->print();
            if(print) {
                std::cout << "Target: " << root->graphNode()->isATarget() << " ";
                std::cout << "DepNodes: " << root->graphNode()->numDependentNodes();
                std::cout << std::endl;
            }
        }
    }




}
