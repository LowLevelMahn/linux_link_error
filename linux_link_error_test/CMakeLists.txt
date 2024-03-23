add_executable(linux_link_error_test "main.cpp" )
find_package(Boost CONFIG REQUIRED COMPONENTS serialization)
target_link_libraries(linux_link_error_test PUBLIC Boost::serialization)
target_link_libraries(linux_link_error_test PRIVATE linux_link_error_lib)
