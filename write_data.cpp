#include <iostream>
#include <random>

#include "common_defines.hpp"

void FillMap(useMetall::map_t& m) {
    // imagine some real data here, instead of randomly generated placeholders
    std::default_random_engine r{};
    std::uniform_int_distribution d{ 0,0x5000 };

    for (int i = 0; i < 0x100; ++i)
        m[d(r)] = d(r);
}

int main() {
    metall::manager manager(metall::create_only, useMetall::Path);
    useMetall::map_t* m = manager.construct<useMetall::map_t>(useMetall::ObjectName)(manager.get_allocator());

    FillMap(*m);

    std::cout << "done generating data" << std::endl;

    return 0;
}
