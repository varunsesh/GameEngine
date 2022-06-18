cmake_minimum_required(VERSION 3.20)
project (GameEngine)

include_directories(${PROJECT_SOURCE_DIR}/lib)
link_directories(${CMAKE_SOURCE_DIR}/include/GLFW)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/main.cpp" "lib/*.cpp")
#find_library(OpenGL REQUIRED)
#find_library(glfw3 libglfw3.a PATH ${CMAKE_SOURCE_DIR}/include/GLFW)
find_package(glfw3 REQUIRED)
set(EXT_SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")
set(EXT_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")




#add_library(glfw3 "libglfw3.a" "include/GLFW")
#add_library(gle "libGLEW.a" "lib/GLFW")

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PUBLIC glfw GL PRIVATE ${CMAKE_DL_LIBS})






