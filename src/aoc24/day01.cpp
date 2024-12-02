#include "day01.h"

#include <algorithm>
#include <fstream>
#include <iostream>

namespace aoc24
{
    Day01::Day01(const std::string input_file) : _input_file(input_file) {}

    void Day01::_load_data()
    {
        // Load data from the input file
        if (_loaded_data) return;

        std::ifstream file(_input_file);
        if (!file.is_open())
        {
            std::cerr << "Error while opening file \"" << _input_file << "\""
                      << std::endl;
            return;
        }

        // Get all numbers
        uint32_t index = 0;
        while (!file.eof())
        {
            // Get the next number
            uint32_t x;
            file >> x;

            // Store it in the correct list
            if (index % 2 == 0)
                _list_a.push_back(x);
            else
                _list_b.push_back(x);
            index++;
        }
        file.close();

        _loaded_data = true;
    }

    std::string Day01::solve_puzzle_one()
    {
        _load_data();
        std::sort(_list_a.begin(), _list_a.end());
        std::sort(_list_b.begin(), _list_b.end());

        uint32_t distance = 0;
        uint32_t index = 0;
        for (const auto& item : _list_a)
        {
            std::pair<uint32_t, uint32_t> items =
                std::make_pair(item, _list_b[index++]);
            if (items.first > items.second)
                distance += items.first - items.second;
            else
                distance += items.second - items.first;
        }

        return std::to_string(distance);
    }

    std::string Day01::solve_puzzle_two()
    {
        return std::string("Not solved yet");
    }
}  // namespace aoc24