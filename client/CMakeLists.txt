cmake_minimum_required(VERSION 3.0.0)
project(enWords VERSION 0.1.0)
 
set(CMAKE_CXX_STANDARD 14)

#FIND_PACKAGE( Boost 1.79 COMPONENTS program_options REQUIRED )
#INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )
#TARGET_LINK_LIBRARIES( ${Boost_LIBRARIES} )


add_executable(enWords main.cpp)
