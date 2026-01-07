# LeetCode/Algorithm Practice Repository

## Overview
This is a collection of algorithm and data structure practice problems implemented in C++ and Python. The repository contains solutions for LeetCode problems and general algorithm practice.

## Project Structure
```
.
├── 0000_practice/        # General algorithm practice
│   ├── practice.cpp      # Merge sort implementation
│   ├── insertion_sort.cpp
│   ├── quick_sort.cpp
│   ├── linked_list.cpp
│   ├── insertion_sort    # Compiled binary
│   └── quick_sort        # Compiled binary
├── 00062_plus_one/       # LeetCode problem #62
│   ├── 00062_plus_one.cpp
│   ├── 00062_plus_one.py
│   └── readme.md
```

## Languages & Tools
- **C++**: Compiled with Clang 14
- **Python**: For alternative solutions

## Running Programs

### C++ Files
Compile and run any C++ file:
```bash
clang++ -o output_name source_file.cpp && ./output_name
```

Example:
```bash
cd 0000_practice && clang++ -o practice practice.cpp && ./practice
```

### Python Files
```bash
python3 00062_plus_one/00062_plus_one.py
```

## Current Workflow
The default workflow compiles and runs `0000_practice/practice.cpp` which demonstrates a merge sort algorithm.
