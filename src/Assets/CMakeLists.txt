add_library(
    Assets OBJECT

    src/Book.cpp
)

target_include_directories(
    Assets PUBLIC

    inc/
)