
include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(simulation
  ${CMAKE_SOURCE_DIR}/src/bin/simulation.cpp
)

target_link_libraries(simulation library)
