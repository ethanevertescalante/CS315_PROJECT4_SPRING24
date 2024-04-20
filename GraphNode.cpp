//
// Created by Ethan on 4/14/2024.
//
#include "GraphNode.hpp"
#include "systemInterface.hpp"

GraphNode::GraphNode(std::string name) : _name(name), _timestamp(0), _listOfDependentNodes(new std::vector<GraphNode*>),
                                         _onPath(false), _wasMade(false), _isATarget(false) {}

std::string GraphNode::getName() { return _name; }

void GraphNode::setName(std::string name) { _name = name; }

void GraphNode::setTimestamp(int ts) { _timestamp = ts; }

int GraphNode::getTimestamp() { return _timestamp; }

std::vector<GraphNode*>* GraphNode::dependentNodes() { return _listOfDependentNodes; }

void GraphNode::setCommand(std::string command) { _command = command; }

std::string GraphNode::getCommand() { return _command; }

void GraphNode::runCommand() {
    executeCommand(getCommand());
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
    if(isATarget()){
        std::cout << "Target Info: \n";
    }else{
     std::cout << "Dependent Info: \n";
    }

    std::cout << "Node Name: " << getName() << std::endl;
    std::cout << "Timestamp: " << getTimestamp() << std::endl;

    if(isATarget()) {
        std::cout << "Command: " << getCommand() << std::endl;
        std::cout << "Dependent Nodes: ";
        for (int index = 0; index < numDependentNodes(); index++) {
            std::cout << _listOfDependentNodes->at(index)->getName() << " ";
        }
    }
    std::cout << std::endl << std::endl;



}





