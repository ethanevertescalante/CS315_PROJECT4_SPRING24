//
// Created by Ethan on 4/14/2024.
//
#include "GraphNode.hpp"

GraphNode::GraphNode(std::string name) : _name(name), _timestamp(0), _listOfDependentNodes(new std::vector<GraphNode*>),
                                         _onPath(false), _wasMade(false), _isATarget(false) {}

std::string GraphNode::getName() { return _name; }

void GraphNode::setName(std::string name) { _name = name; }

void GraphNode::setTimestamp(int ts) { _timestamp = ts; }

int GraphNode::getTimestamp() { return _timestamp; }

std::vector<GraphNode*>* GraphNode::dependentNodes() { return _listOfDependentNodes; }

void GraphNode::setCommand(std::string cmnd) { _command = cmnd; }

std::string GraphNode::getCommand() { return _command; }

void GraphNode::runCommand() {
    if (_isATarget) {
        // Execute the command associated with this node
        std::cout << "Running command for target: " << _name << std::endl;
        // Execute command code goes here
    }
}

void GraphNode::addDependentNode(GraphNode* child) { _listOfDependentNodes->push_back(child); }

bool GraphNode::onPath() { return _onPath; }

void GraphNode::onPath(bool v) { _onPath = v; }

bool GraphNode::wasMade() { return _wasMade; }

void GraphNode::wasMade(bool v) { _wasMade = v; }

bool GraphNode::isATarget() { return _isATarget; }

void GraphNode::isATarget(bool v) { _isATarget = v; }

int GraphNode::numDependentNodes() { return _listOfDependentNodes->size(); }

void GraphNode::print() {
    std::cout << "Node Name: " << _name << std::endl;
    std::cout << "Timestamp: " << _timestamp << std::endl;
    std::cout << "Command: " << _command << std::endl;
    std::cout << "Dependent Nodes: ";
    for (auto node : *_listOfDependentNodes) {
        std::cout << node->getName() << " ";
    }
    std::cout << std::endl;
}
