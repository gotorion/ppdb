set(PPDB_LIBRARY_NAME ppdb)
set(BUILD_SHARED_LIBS ON)
add_library(
    ${PPDB_LIBRARY_NAME} 
    ${CMAKE_CURRENT_SOURCE_DIR}/options.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/db.cc
)

target_include_directories(
    ${PPDB_LIBRARY_NAME}
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    ${PPDB_LIBRARY_NAME}
    PUBLIC
    absl::status
    absl::statusor
    spdlog::spdlog
)