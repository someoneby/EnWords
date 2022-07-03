cmake_minimum_required(VERSION 3.0.0)
project(testServer VERSION 0.1.0)
 
set(CMAKE_CXX_STANDARD 20)


#add_definitions(-DTEST_RUN)

add_executable(testServer main.cpp
    TCs/WordsDB_TC.cpp
    TCs/PullForTestCreator_TC.cpp
    ../src/WordsDB/WordsDB.cpp
    ../src/PullForTestCreator/PullForTestCreator.cpp
    ../src/PacketCreator/PacketCreator.cpp
    
)

# add_executable(testServer PullForTestCreator_TC.cpp
# ../src/WordsDB/WordsDB.cpp
# ../src/PullForTestCreator/PullForTestCreator.cpp
    
#     )
