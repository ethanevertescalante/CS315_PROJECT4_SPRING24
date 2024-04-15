cmake_minimum_required(VERSION 3.25.2)
project(CS315_PROJECT4_SPRING24)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CS315_PROJECT4_SPRING24
        main.cpp
        Token.cpp
        Token.hpp
        Tokenizer.cpp
        Tokenizer.hpp DepGraph.hpp GraphNode.hpp MakeTree.hpp systemInterface.cpp systemInterface.hpp TreeNode.hpp DepGraph.cpp GraphNode.cpp MakeTree.cpp)
