cmake_minimum_required(VERSION 2.8)

project(lm2-cpp)
SET(CMAKE_C_FLAGS "-fPIC")
SET(CMAKE_CXX_FLAGS "-std=c++14 -fPIC")
set(CMAKE_BUILD_TYPE Debug)

include_directories(
	src
	include
	dep
)

add_executable(lm2test
	test/catch.cc
	test/test.cc
)

add_library(lm2 SHARED
	src/c.cc
)

target_link_libraries(lm2test lm2)

install(TARGETS lm2 DESTINATION lib)
install(FILES include/lm2.h DESTINATION include)

add_test(NAME lm2test COMMAND lm2test)
enable_testing(true)
