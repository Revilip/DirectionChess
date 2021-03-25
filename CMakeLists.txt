aux_source_directory(src SRC_LIST)
add_executable(dirchess ${SRC_LIST})
add_executable(dirchess main.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
