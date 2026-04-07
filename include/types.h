#ifndef TYPES_H
#define TYPES_H

#include <string>
#include <vector>

struct Pin {
    std::string name;
    int dx = 0;
    int dy = 0;
};

struct Node {
    std::string id;
    int w = 1;
    int h = 1;
    bool fixed = false;
    int x = -1;
    int y = -1;
    std::vector<Pin> pins;
};

struct NetPinRef {
    int nodeIdx = -1;
    int pinIdx = -1;
};

struct Net {
    std::string id;
    std::vector<NetPinRef> pins;
};

struct PlacementState {
    int gridW = 0;
    int gridH = 0;
    std::vector<Node> nodes;
    std::vector<Net> nets;
};

struct Move {
    int nodeIdx = -1;
    int oldX = -1;
    int oldY = -1;
    int newX = -1;
    int newY = -1;
};

#endif