enable_language(CUDA)

add_library(foo_cuda foo.cu)
target_link_libraries(foo_cuda)
