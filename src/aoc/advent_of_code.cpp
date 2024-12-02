#include "advent_of_code.h"

#include <exception>
#include <stdexcept>

namespace aoc
{
    AdventOfCode::AdventOfCode() {}

    void AdventOfCode::add_solution(uint8_t day,
                                    std::shared_ptr<DaySolution> solution)
    {
        if (day < 1 || day > 24)
            throw std::invalid_argument("Day must be between 0 and 25");
        _solutions[day] = solution;
    }

    std::shared_ptr<DaySolution> AdventOfCode::get_solution(uint8_t day)
    {
        return _solutions.at(day);
    }
}  // namespace aoc