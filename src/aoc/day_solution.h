#pragma once

#include <string>

namespace aoc
{
    class DaySolution
    {
    public:
        virtual std::string solve_puzzle_one() = 0;
        virtual std::string solve_puzzle_two() = 0;
    };
}  // namespace aoc