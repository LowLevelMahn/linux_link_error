add_library( linux_link_error_lib 
  "test.cpp"
  "MyType.hpp"
  "serialize_MyType.hpp"
)
find_package(Boost CONFIG REQUIRED COMPONENTS serialization)
target_link_libraries(linux_link_error_lib PUBLIC Boost::serialization)
