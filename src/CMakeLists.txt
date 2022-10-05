add_subdirectory(Assets)

add_executable(Proiect

    main.cpp
)

target_include_directories(
    Proiect PUBLIC

    Assets/inc
)

target_link_libraries(
    Proiect
    Assets
)

install(TARGETS Proiect DESTINATION ${PROJECT_RUNTIME_DIR})