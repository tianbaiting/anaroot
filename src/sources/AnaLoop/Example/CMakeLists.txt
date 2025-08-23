project(analoopexample)

set(SRCS
src/TAlBigRIPSExample.cc
src/TAlDALIExample.cc
src/TAlGeExample.cc
src/TAlSAMURAIDCExample.cc
src/TAlSAMURAIExample.cc
src/TAlSAMURAIHODExample.cc
src/TAlWINDSExample.cc
)

set(HEADERS
include/TAlBigRIPSExample.hh
include/TAlDALIExample.hh
include/TAlGeExample.hh
include/TAlSAMURAIDCExample.hh
include/TAlSAMURAIExample.hh
include/TAlSAMURAIHODExample.hh
include/TAlWINDSExample.hh
)

include_directories(${CMAKE_SOURCE_DIR}/sources/Core/include)
include_directories(${CMAKE_SOURCE_DIR}/sources/Reconstruction/BigRIPS/include)
include_directories(${CMAKE_SOURCE_DIR}/sources/Reconstruction/DALI/include)
include_directories(${CMAKE_SOURCE_DIR}/sources/Reconstruction/SAMURAI/include)
include_directories(${CMAKE_SOURCE_DIR}/sources/Reconstruction/WINDS/include)
include_directories(${CMAKE_SOURCE_DIR}/sources/AnaLoop/Core/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR})

add_library(analoopexample SHARED
  ${SRCS}		    		    
  G__analoopexample.cxx
  )

target_link_libraries(analoopexample ${ROOT_LIBRARIES} anacore anabrips anadali anasamurai anawinds analoop)
      
ROOT_GENERATE_DICTIONARY(G__analoopexample
  ${HEADERS}	
  LINKDEF analoopexample_linkdef.hh
  )

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
		  DESTINATION include)

install(TARGETS analoopexample
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if (${ROOT_VERSION} VERSION_GREATER "6.0")
   install(
      FILES
      ${CMAKE_CURRENT_BINARY_DIR}/libanaloopexample_rdict.pcm
      ${CMAKE_CURRENT_BINARY_DIR}/libanaloopexample.rootmap
      DESTINATION lib/)
endif (${ROOT_VERSION} VERSION_GREATER "6.0")
