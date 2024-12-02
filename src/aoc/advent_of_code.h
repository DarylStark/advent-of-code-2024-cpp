#pragma once
#include <cstdint>
#include <map>
#include <memory>

#include "day_solution.h"

namespace aoc
{
    class AdventOfCode
    {
    private:
        std::map<uint8_t, std::shared_ptr<DaySolution>> _solutions;

    public:
        AdventOfCode();

        void add_solution(uint8_t day, std::shared_ptr<DaySolution> solution);
        std::shared_ptr<DaySolution> get_solution(uint8_t day);
    };
}  // namespace aoc