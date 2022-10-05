
cmake_minimum_required(VERSION 3.10)

# ----- Project config -----

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

project(
    SabloaneDeProiectare
    VERSION 0.0.0.1
    DESCRIPTION "Proiect pentru disciplina Sabloane de Proiectare"
)

set(PROJECT_RUNTIME_DIR ${PROJECT_SOURCE_DIR}/bin)
set(PROJECT_LIBRARY_DIR ${PROJECT_SOURCE_DIR}/lib)
set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include/EasyGUI)

# ----- Build config -----

add_compile_options(
     -pedantic
     -O3
	 -Wall
	 -Wextra
	 -Wcast-align
	 -Wcast-qual
	 -Wdisabled-optimization
	 -Wformat=2
	 -Winit-self
	 -Wlogical-op
	 -Wmissing-declarations
	 -Wmissing-include-dirs
	 -Wnoexcept
	 -Wold-style-cast
	 -Woverloaded-virtual
	 -Wredundant-decls
	 -Wshadow
	 -Wsign-conversion
	 -Wsign-promo
	 -Wstrict-null-sentinel
	 -Wstrict-overflow=5
	 -Wswitch-default
	 -Wundef
	 -Werror
	 -Wno-unused
)

# ----- Building sources -----

add_subdirectory(src)
