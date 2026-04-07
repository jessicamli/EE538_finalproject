#ifndef PARSER_H
#define PARSER_H

#include <string>
#include "types.h"

bool read_netlist(const std::string& path, PlacementState& state);

#endif