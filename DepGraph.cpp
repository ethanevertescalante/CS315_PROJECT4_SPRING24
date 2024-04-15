//
// Created by Ethan on 4/14/2024.
//
#include "DepGraph.hpp"

Graph::Graph(std::string name) : _fileToMake(name), _targetToMake(""), firstTarget(nullptr), _tree(nullptr) {}

void Graph::print() {

}

void Graph::parseDepGraph() {

}

void Graph::runMake() {

}

bool Graph::isCyclic() {
    return isCyclic(firstTarget);
}

bool Graph::isCyclic(GraphNode* node) {

}

