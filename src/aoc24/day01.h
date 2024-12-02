#pragma once
#include <vector>

#include "../aoc/day_solution.h"

namespace aoc24
{
    class Day01 : public aoc::DaySolution
    {
    private:
        const std::string _input_file;
        bool _loaded_data = false;
        std::vector<uint32_t> _list_a;
        std::vector<uint32_t> _list_b;

        void _load_data();

    public:
        Day01(const std::string input_file);
        std::string solve_puzzle_one();
        std::string solve_puzzle_two();
    };
}  // namespace aoc24