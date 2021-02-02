
include_directories(${CMAKE_SOURCE_DIR}/include)

add_library(library SHARED
  ${CMAKE_SOURCE_DIR}/src/lib/particle.cpp
)
