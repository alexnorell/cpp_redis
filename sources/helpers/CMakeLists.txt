target_sources(cpp_redis
	PUBLIC
		generate_rand.hpp;
		variadic_template.hpp;
)

target_include_directories(cpp_redis
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}
)
