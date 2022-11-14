
#include "boost/container/map.hpp"
#include "metall/metall.hpp"

namespace useMetall {
	using map_t = boost::container::map<int, int, std::less<int>, metall::manager::allocator_type<std::pair<const int, int>>>;

	constexpr const char* Path = "/tmp/datastore";
	constexpr const char* ObjectName = "map";
}
