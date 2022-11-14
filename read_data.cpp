#include <iostream>

#include "common_defines.hpp"

void PrintMap(const useMetall::map_t& m) {
    for (const auto& kv : m)
        std::cout << kv.first << "=" << kv.second << std::endl;
    std::cout << "number of k/v pairs: " << m.size() << std::endl;
}

int main() {
    metall::manager manager(metall::open_only, useMetall::Path);
    useMetall::map_t* m = manager.find<useMetall::map_t>(useMetall::ObjectName).first;

    std::cout << "read data:" << std::endl;
    PrintMap(*m);

    return 0;
}
