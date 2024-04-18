//
// Created by Ethan on 4/14/2024.
//
#include "MakeTree.hpp"

MakeTree::MakeTree() : _root(nullptr) {}

TreeNode* MakeTree::insert(TreeNode* tNode, GraphNode* nNode) {


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
