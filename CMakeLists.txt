cmake_minimum_required(VERSION 3.29)
project(DataStructureC C)

set(CMAKE_C_STANDARD 99)

add_executable(DataStructureC main.c
        implementations/list.c
        interfaces/list.h
        interfaces/stack_vector.h
        implementations/stack_vector.c
        interfaces/stack.h
        implementations/stack.c
        interfaces/queue.h
        implementations/queue_vector.c
        interfaces/queue_vector.h
        implementations/queue.c
        interfaces/circular_list.h
        implementations/circular_list.c
        implementations/double_list.c
        interfaces/double_list.h
        interfaces/tree.h
        implementations/tree.c
        interfaces/arvb.h
        implementations/arvb.c
        implementations/sorting.c
        interfaces/sorting.h
)
