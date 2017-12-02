cmake_minimum_required(VERSION 2.8)

project(rgss)
aux_source_directory(. SRCS)
add_executable(${PROJECT_NAME} ${SRCS})
include_directories(
    /opt/ruby-2.4.2/include/ruby-2.4.0
)
