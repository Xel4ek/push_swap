cmake_minimum_required(VERSION 3.15)
project(push_swap C)

set(CMAKE_C_STANDARD 99)
set(SRC
        src/ft_lstprint.c
        src/read.c
        main.c)


include_directories(lib/libft/includes)
include_directories(includes)

add_executable(push_swap ${SRC})
add_subdirectory(lib/libft)
target_link_libraries(push_swap libft)