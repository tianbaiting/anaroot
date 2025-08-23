project(anadali)

set(SRCS
  src/TArtCalibDALI.cc
  src/TArtDALIParameters.cc
)

set(HEADERS
  include/TArtCalibDALI.hh
  include/TArtDALINaI.hh
  include/TArtDALINaIPara.hh
  include/TArtDALIParameters.hh
)

include_directories(${CMAKE_SOURCE_DIR}/sources/Core/include)
include_directories(${CMAKE_SOURCE_DIR}/sources/Reconstruction/BigRIPS/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR} )

add_library(anadali SHARED
		    ${SRCS}		    		    
	G__anadali.cxx
	)

target_link_libraries(anadali ${ROOT_LIBRARIES} anacore)
ROOT_GENERATE_DICTIONARY(G__anadali
  ${HEADERS}      
  LINKDEF anadali_linkdef.hh
  )

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
		  DESTINATION include)

install(TARGETS anadali
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if (${ROOT_VERSION} VERSION_GREATER "6.0")
   install(
      FILES
      ${CMAKE_CURRENT_BINARY_DIR}/libanadali_rdict.pcm
      ${CMAKE_CURRENT_BINARY_DIR}/libanadali.rootmap
      DESTINATION lib/)
endif (${ROOT_VERSION} VERSION_GREATER "6.0")
