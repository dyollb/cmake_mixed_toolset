add_library(foo_intel foo.cpp)
target_link_libraries(foo_intel)
set_target_properties(foo_intel PROPERTIES VS_PLATFORM_TOOLSET "Intel C++ Compiler 18.0")
