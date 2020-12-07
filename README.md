# Example CMake Configuration for Targets with Different Toolsets

In the company where I work, we usually build our numerical solvers with the Intel C++ compilers, because it (traditionally) has better vectorization, and other optimizations than MSVC.
WIN32 libraries built with Intel and MSVC are ABI compatible (they use the same base toolset, e.g. v140 for Visual Studio 2015).

### Mixing toolsets with ExternalProject
This little example project makes use of `ExternalProject` to build specific libraries with a different `CMAKE_GENERATOR_TOOLSET` than the main project.
Those libraries are then configured and built in a separate solution, into the same output directories. The main project orchestrates this, using dependencies.

### Why not use VS_PLATFORM_TOOLSET?
Unfortunately, the `VS_PLATFORM_TOOLSET` property is not intended for this kind of mixing of toolsets, and may lead to subtle problems, because CMake caches global settings for one single toolset (See [17358](https://gitlab.kitware.com/cmake/cmake/-/issues/17358), [20590](https://gitlab.kitware.com/cmake/cmake/-/issues/20590)).
