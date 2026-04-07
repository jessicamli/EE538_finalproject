# IO Schema

## Overview
This project uses a plain-text format to describe placement benchmark inputs and placement results.

The format supports:
- grid bounds
- variable-size components
- fixed and movable components
- pins with relative coordinates
- nets connecting pins
- placement output coordinates

---

## Input Format

### Grid
```txt
GRID <W> <H>

COMPONENTS <N>
COMPONENT <comp_id> <w> <h> <movable|fixed> [x y]

PINS <P>
PIN <comp_id> <pin_name> <dx> <dy>

NETS <M>
NET <net_id> <degree> <comp.pin> <comp.pin> ...