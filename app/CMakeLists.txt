add_executable(app app.cpp)
target_link_libraries(app PRIVATE foo_intel foo_v140)
target_link_directories(app PRIVATE 
	${CMAKE_LIBRARY_OUTPUT_DIRECTORY}
	"C:/Program Files (x86)/IntelSWTools/compilers_and_libraries_2018/windows/compiler/lib/intel64_win"
)