target_sources(cpp_redis
	PUBLIC
		client.ipp;
		impl_types.hpp;
)

target_include_directories(cpp_redis
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}
)
