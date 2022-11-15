
#include "boost/container/options.hpp"
#include "boost/container/map.hpp"

#define BOOST_BIND_GLOBAL_PLACEHOLDERS // disable a deprecated warning from boost that gets triggered by metall
#include "metall/metall.hpp"

namespace useMetall {
	// a boost::container::map with a metall allocator
	template<class K, class V, class Compare = std::less<K>, class Options = boost::container::tree_assoc_defaults>
	using MapWithMetallAlloc = boost::container::map<K, V, Compare, metall::manager::allocator_type<std::pair<const K, V>>, Options>;

	// map type used
	using map_t = MapWithMetallAlloc<int, int>;

	// path and object name for metall
	constexpr const char* Path = "/tmp/datastore";
	constexpr const char* ObjectName = "map";
}
