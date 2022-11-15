
#include "boost/container/options.hpp"
#include "boost/container/map.hpp"
#include "metall/metall.hpp"

namespace useMetall {
	template<class K, class V, class Compare = std::less<K>, class Options = boost::container::tree_assoc_defaults>
	using MapWithMetallAlloc = boost::container::map<K, V, Compare, metall::manager::allocator_type<std::pair<const K, V>>, Options>;

	using map_t = MapWithMetallAlloc<int, int>;

	constexpr const char* Path = "/tmp/datastore";
	constexpr const char* ObjectName = "map";
}
