#include <iostream>
#include "parser.h"
#include "writer.h"

using namespace std;

int main() {
    PlacementState s1, s2;

    if (!read_netlist("examples/tiny_case.txt", s1)) {
        cerr << "Failed to read original file\n";
        return 1;
    }

    // assign dummy coordinates for movable nodes so writer can output placement
    for (auto& node : s1.nodes) {
        if (!node.fixed) {
            node.x = 0;
            node.y = 0;
        }
    }

    if (!write_placement("examples/roundtrip_out.txt", s1, 0, "roundtrip")) {
        cerr << "Failed to write output file\n";
        return 1;
    }

    if (!read_netlist("examples/roundtrip_out.txt", s2)) {
        cerr << "Failed to read roundtrip file\n";
        return 1;
    }

    if (s1.gridW != s2.gridW || s1.gridH != s2.gridH) {
        cerr << "Grid mismatch\n";
        return 1;
    }
    if (s1.nodes.size() != s2.nodes.size()) {
        cerr << "Node count mismatch\n";
        return 1;
    }
    if (s1.nets.size() != s2.nets.size()) {
        cerr << "Net count mismatch\n";
        return 1;
    }

    cout << "Round-trip test passed\n";
    return 0;
}