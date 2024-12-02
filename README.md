# Advent of Code 2024 - C++

This is my repository with the code for the Advent of Code 2024. I will be using C++ for all the challenges in this repository.

## How to run the code

Make sure you have `cmake` installed. Use the following commands to compile and run the code:

```bash
# Create the build system. I use Ninja, but you can use any Generator you want.
cmake -B build/ -S . -G "Ninja Multi-Config"

# Build the code
cmake --build build/
```