#include <iomanip>
#include <iostream>
#include <stdexcept>

#include "aoc/advent_of_code.h"
#include "aoc/day_solution.h"
#include "aoc24/day01.h"

int main()
{
    aoc::AdventOfCode aoc24;

    // Add solutions
    aoc24.add_solution(1,
                       std::make_shared<aoc24::Day01>("data/day01-input.txt"));

    // Print solutions
    std::cout << "Advent of Code 2024 - C++ version\n";
    std::cout << "By Daryl Stark\n\n";

    for (uint8_t day = 1; day < 25; day++)
    {
        try
        {
            std::shared_ptr<aoc::DaySolution> solution =
                aoc24.get_solution(day);
            std::cout << "Day " << std::setw(2) << std::setfill('0')
                      << static_cast<uint16_t>(day) << ": ";
            std::cout << "Puzzle 1: " << solution->solve_puzzle_one() << '\n';
            std::cout << std::string(8, ' ')
                      << "Puzzle 2: " << solution->solve_puzzle_two() << '\n';
        }
        catch (std::out_of_range&)
        {
            break;
        }
    }

    std::flush(std::cout);

    return 0;
}