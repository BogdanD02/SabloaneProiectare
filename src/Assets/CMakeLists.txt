add_library(
    Assets OBJECT

    src/Section.cpp
    src/Image.cpp
    src/Paragraph.cpp
    src/Table.cpp
    src/Author.cpp
    src/Book.cpp
)

target_include_directories(
    Assets PUBLIC

    inc/
)