#ifndef IO_H
#define IO_H

#include <string>
#include "types.h"

bool read_netlist(const std::string& path, PlacementState& state);
bool write_placement(const std::string& path, const PlacementState& state, long long cost);

#endif