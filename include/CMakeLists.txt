project(clocks_include)

# all includes
set(CLOCKS_INCLUDE_ALL
        clock_12.hpp
        clock_24.hpp
        )

# create interface
add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

# list sources to make IDE happy
target_sources(${PROJECT_NAME} INTERFACE ${CLOCKS_INCLUDE_ALL})

# require c++20
target_compile_features(${PROJECT_NAME} INTERFACE cxx_std_20)
