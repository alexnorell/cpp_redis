target_sources(cpp_redis
	PUBLIC
		redis_connection.cpp;
		redis_connection.hpp;
		tcp_client.cpp;
		tcp_client.hpp;
		tcp_client_iface.hpp;
)

target_include_directories(cpp_redis
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}
)
