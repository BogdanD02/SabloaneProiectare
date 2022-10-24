add_library(
    Assets OBJECT

    src/Chapter.cpp
    src/Image.cpp
    src/Paragraph.cpp
    src/SubChapter.cpp
    src/Table.cpp
    src/Author.cpp
    src/Book.cpp
)

target_include_directories(
    Assets PUBLIC

    inc/
)