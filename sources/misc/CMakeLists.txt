target_sources(cpp_redis
	PUBLIC
		convert.hpp;
		deprecated.hpp;
		dispatch_queue.cpp;
		dispatch_queue.hpp;
		error.hpp;
		logger.cpp;
		logger.hpp;
		macro.hpp;
		optional.hpp;
)

target_include_directories(cpp_redis
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}
)
