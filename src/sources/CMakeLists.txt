project(anaroot) 

add_subdirectory(Core)
add_subdirectory(Nadeko)
add_subdirectory(Reconstruction)
add_subdirectory(AnaLoop)

add_library(anaroot SHARED anaroot.C)
target_link_libraries(anaroot ${ROOT_LIBRARIES} anacore ananadeko anabrips anacatana anadali anaespri anasamurai anasilicons anawinds analoop analoopexample analoopencexample)
install(TARGETS anaroot
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

