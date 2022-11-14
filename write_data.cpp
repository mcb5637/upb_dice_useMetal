#include <iostream>
#include <random>

#include "boost/container/map.hpp"
//#include "metall/metall.hpp"

using map_t = boost::container::map<int, int>;

void FillMap(map_t& m) {
    std::default_random_engine r{};
    std::uniform_int_distribution d{ 0,0x5000 };

    for (int i = 0; i < 0x100; ++i)
        m[d(r)] = d(r);
}

int main() {
    map_t m{};
    FillMap(m);


    std::cout << "write writing data:" << std::endl;
    for (const auto& kv : m)
        std::cout << kv.first << "=" << kv.second << std::endl;
    std::cout << "number of k/v pairs: " << m.size() << std::endl;

    return 0;
}
