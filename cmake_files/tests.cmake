include(CTest)

# This creates an executable with name <name>
# and links to the library <link_library>
function(add_unit_test name link_librar)
  add_executable(${name}
    ${CMAKE_SOURCE_DIR}/tests/${name}.cpp
    ${CMAKE_SOURCE_DIR}/tests/main.cpp
    )
  target_link_libraries(${name} gtest_main ${link_library})
  add_test(NAME ${name} COMMAND ${name})
endfunction()
  
add_unit_test(test_particle simulation)

