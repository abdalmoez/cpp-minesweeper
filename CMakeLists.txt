cmake_minimum_required(VERSION 3.0)
project(cpp_minesweeper)

include_directories(inc)


file(GLOB MINESWEEPER_SRC_FILES
    src/*.cpp
)

add_executable(cpp_minesweeper ${MINESWEEPER_SRC_FILES})
target_link_libraries(cpp_minesweeper -lsfml-graphics -lsfml-window -lsfml-system -g -ggdb)
add_custom_command(TARGET cpp_minesweeper PRE_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                       ${CMAKE_SOURCE_DIR}/PKG/ $<TARGET_FILE_DIR:cpp_minesweeper>)
