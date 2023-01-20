set(UTILS_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(UTILS_SOURCES 
    ${UTILS_DIR}/Adder.cpp
)
target_include_directories(cpp_env_setup_vsc PRIVATE .)
target_sources(cpp_env_setup_vsc PRIVATE ${UTILS_SOURCES})
