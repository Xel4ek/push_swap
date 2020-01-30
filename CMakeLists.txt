cmake_minimum_required(VERSION 3.14)
project(push_swap C)

set(CMAKE_C_STANDARD 99)
set(SRC
        src/is_sorted.c
        src/ft_lstd_swap.c
        src/ft_lstprint.c
        src/read.c
        src/ft_operation.c
        src/dfs.c
        src/ft_quick_sort.c
        src/ft_ps_new_content.c
        src/ft_strsplit_to_inttab.c
        src/ft_lstd_deep_del.c
        src/ft_lstd_to_array.c
        src/ft_array_to_lstd.c
        src/ft_is_array_in_lstd.c
        src/ft_sort_ratio.c
        src/ft_queue_sort.c
        src/ft_sort_tools.c
        src/ft_checker_tools.c src/ft_operation2.c src/ft_sort_tools2.c src/ft_sort_tools3.c src/ft_sort_tools4.c src/ft_output.c src/dfs_tool.c)


include_directories(lib/libft/includes)
include_directories(includes)
add_executable(hash ${SRC} hash.c)
add_executable(push_swap ${SRC} push_swap.c)
add_executable(checker ${SRC} checker.c )

add_subdirectory(lib/libft)
target_link_libraries(push_swap libft)
target_link_libraries(checker libft)
target_link_libraries(hash libft)