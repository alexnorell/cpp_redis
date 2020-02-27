add_library(cpp_redis STATIC)
target_sources(cpp_redis
	PUBLIC
		cpp_redis.hpp;
)

target_link_libraries(cpp_redis
	PUBLIC
		tacopie;
)

target_include_directories(cpp_redis
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}
)

add_subdirectory(core)
add_subdirectory(builders)
add_subdirectory(helpers)
add_subdirectory(impl)
add_subdirectory(misc)
add_subdirectory(network)
