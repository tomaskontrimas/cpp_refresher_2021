# cpp_refresher_2021
C++ refresher bootcamp including concurrency with std::thread.

# Outline
This is the code for a 8 day C++ refresher course including concurrency with std::thread.

* Day 1 - Classes
* Day 2 - Generic Programming
* Day 3 - Object Oriented Programming
* Day 4 - Pointers, References, and Smart Pointers
* Day 5 - Threads
* Day 6 - Lock-based vs. Lock-free Data Structures
* Day 7 - Thread Pools
* Day 8 - Concurrency in IceTray - IceCores

# Getting Started
This project uses googletest as a submodule, so make sure to clone recursively.
<code>bash
  $ git clone --recurse-submodules git@github.com:icecube/cpp_refresher_2021.git
  $ cd cpp_refresher_2021
  $ mkdir build
  $ cd build
  $ cmake ..
  $ make
  $ ctest
<\code>

You should see the following output if all goes well.
  
    $ git clone --recurse-submodules git@github.com:icecube/cpp_refresher_2021.git
    Cloning into 'cpp_refresher_2021'...
    remote: Enumerating objects: 31, done.
    remote: Counting objects: 100% (31/31), done.
    remote: Compressing objects: 100% (24/24), done.
    remote: Total 31 (delta 5), reused 27 (delta 3), pack-reused 0
    Receiving objects: 100% (31/31), 4.75 KiB | 4.75 MiB/s, done.
    Resolving deltas: 100% (5/5), done.
    Submodule 'googletest' (https://github.com/google/googletest) registered for path 'googletest'
    Cloning into '/home/olivas/cpp_refresher_2021/googletest'...
    remote: Enumerating objects: 21825, done.        
    remote: Total 21825 (delta 0), reused 0 (delta 0), pack-reused 21825        
    Receiving objects: 100% (21825/21825), 8.30 MiB | 284.00 KiB/s, done.
    Resolving deltas: 100% (16142/16142), done.
    Submodule path 'googletest': checked out '273f8cb059a4e7b089731036392422b5ef489791'
    [ 11:38AM ]  [ olivas@finn:~ ]
     $ cd cpp_refresher_2021 
    [ 11:38AM ]  [ olivas@finn:~/cpp_refresher_2021(main✔) ]
     $ mkdir build
    [ 11:38AM ]  [ olivas@finn:~/cpp_refresher_2021(main✔) ]
     $ cd build 
    [ 11:38AM ]  [ olivas@finn:~/cpp_refresher_2021/build(main✔) ]
     $ cmake ..
    -- The C compiler identification is GNU 9.3.0
    -- The CXX compiler identification is GNU 9.3.0
    -- Check for working C compiler: /usr/bin/cc
    -- Check for working C compiler: /usr/bin/cc -- works
    -- Detecting C compiler ABI info
    -- Detecting C compiler ABI info - done
    -- Detecting C compile features
    -- Detecting C compile features - done
    -- Check for working CXX compiler: /usr/bin/c++
    -- Check for working CXX compiler: /usr/bin/c++ -- works
    -- Detecting CXX compiler ABI info
    -- Detecting CXX compiler ABI info - done
    -- Detecting CXX compile features
    -- Detecting CXX compile features - done
    -- Found Boost: /usr/lib/x86_64-linux-gnu/cmake/Boost-1.71.0/BoostConfig.cmake (found version "1.71.0")  
    -- Found Python: /usr/bin/python3.8 (found version "3.8.5") found components: Interpreter 
    -- Looking for pthread.h
    -- Looking for pthread.h - found
    -- Performing Test CMAKE_HAVE_LIBC_PTHREAD
    -- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Failed
    -- Looking for pthread_create in pthreads
    -- Looking for pthread_create in pthreads - not found
    -- Looking for pthread_create in pthread
    -- Looking for pthread_create in pthread - found
    -- Found Threads: TRUE  
    -- Configuring done
    -- Generating done
    -- Build files have been written to: /home/olivas/cpp_refresher_2021/build
    [ 11:38AM ]  [ olivas@finn:~/cpp_refresher_2021/build(main✔) ]
     $ make
    Scanning dependencies of target library
    [  6%] Building CXX object CMakeFiles/library.dir/src/lib/particle.cpp.o
    [ 13%] Linking CXX shared library lib/liblibrary.so
    [ 13%] Built target library
    Scanning dependencies of target simulation
    [ 20%] Building CXX object CMakeFiles/simulation.dir/src/bin/simulation.cpp.o
    [ 26%] Linking CXX executable bin/simulation
    [ 26%] Built target simulation
    Scanning dependencies of target gtest
    [ 33%] Building CXX object googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
    [ 40%] Linking CXX static library ../../lib/libgtestd.a
    [ 40%] Built target gtest
    Scanning dependencies of target gtest_main
    [ 46%] Building CXX object googletest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
    [ 53%] Linking CXX static library ../../lib/libgtest_maind.a
    [ 53%] Built target gtest_main
    Scanning dependencies of target test_particle
    [ 60%] Building CXX object CMakeFiles/test_particle.dir/tests/test_particle.cpp.o
    [ 66%] Building CXX object CMakeFiles/test_particle.dir/tests/main.cpp.o
    [ 73%] Linking CXX executable bin/test_particle
    [ 73%] Built target test_particle
    Scanning dependencies of target gmock
    [ 80%] Building CXX object googletest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
    [ 86%] Linking CXX static library ../../lib/libgmockd.a
    [ 86%] Built target gmock
    Scanning dependencies of target gmock_main
    [ 93%] Building CXX object googletest/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
    [100%] Linking CXX static library ../../lib/libgmock_maind.a
    [100%] Built target gmock_main
    [ 11:39AM ]  [ olivas@finn:~/cpp_refresher_2021/build(main✔) ]
     $ ctest
    Test project /home/olivas/cpp_refresher_2021/build
        Start 1: test_particle
    1/1 Test #1: test_particle ....................   Passed    0.00 sec
    
    100% tests passed, 0 tests failed out of 1
    
    Total Test time (real) =   0.00 sec
    [ 11:39AM ]  [ olivas@finn:~/cpp_refresher_2021/build(main✔) ]

