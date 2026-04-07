#ifndef WRITER_H
#define WRITER_H

#include <string>
#include "types.h"

bool write_placement(const std::string& path,
                     const PlacementState& state,
                     long long cost,
                     const std::string& meta = "");

#endif