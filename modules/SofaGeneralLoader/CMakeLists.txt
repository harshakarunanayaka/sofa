cmake_minimum_required(VERSION 3.12)
project(SofaGeneralLoader)

sofa_find_package(ZLIB REQUIRED BOTH_SCOPES)

set(HEADER_FILES
    ReadState.h
    ReadState.inl
    ReadTopology.h
    ReadTopology.inl
    config.h.in
    initGeneralLoader.h
    )

set(SOURCE_FILES
    ReadState.cpp
    ReadTopology.cpp
    initGeneralLoader.cpp
    )

list(APPEND HEADER_FILES
    GIDMeshLoader.h
    GridMeshCreator.h
    InputEventReader.h
    MeshGmshLoader.h
    MeshOffLoader.h
    MeshSTLLoader.h
    MeshTrianLoader.h
    MeshXspLoader.h
    OffSequenceLoader.h
    SphereLoader.h
    StringMeshCreator.h
    VoxelGridLoader.h
    )
list(APPEND SOURCE_FILES
    GIDMeshLoader.cpp
    GridMeshCreator.cpp
    InputEventReader.cpp
    MeshGmshLoader.cpp
    MeshOffLoader.cpp
    MeshSTLLoader.cpp
    MeshTrianLoader.cpp
    MeshXspLoader.cpp
    OffSequenceLoader.cpp
    SphereLoader.cpp
    StringMeshCreator.cpp
    VoxelGridLoader.cpp
    )

add_library(${PROJECT_NAME} SHARED ${HEADER_FILES} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} PUBLIC SofaCore SofaSimulationTree SofaHelper)
target_link_libraries(${PROJECT_NAME} PUBLIC ZLIB::ZLIB)
if(CMAKE_SYSTEM_NAME STREQUAL Windows)
    sofa_install_libraries(TARGETS ZLIB::ZLIB)
endif()

sofa_add_targets_to_package(
    PACKAGE_NAME SofaGeneral
    TARGETS ${PROJECT_NAME} AUTO_SET_TARGET_PROPERTIES
    )
