file(GLOB srcs *.cpp)
add_executable(${CMAKE_PROJECT_NAME} ${srcs})
if(WIN32)
  set(gl_libs opengl32)
endif(WIN32)

if(UNIX)
  message(STATUS "Building for ${CMAKE_SYSTEM}")
  set(gl_libs GL)
endif()


target_link_libraries(${CMAKE_PROJECT_NAME} imgui glfw ${gl_libs})