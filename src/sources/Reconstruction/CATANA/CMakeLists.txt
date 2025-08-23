project(anacatana)

set(SRCS
  src/TArtCATANAParameters.cc
  src/TArtCalibCATANA.cc
)

set(HEADERS
  include/TArtCATANACsI.hh
  include/TArtCATANACsIPara.hh
  include/TArtCATANAParameters.hh
  include/TArtCalibCATANA.hh
)

include_directories(${CMAKE_SOURCE_DIR}/sources/Core/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR} )

add_library(anacatana SHARED
		    ${SRCS}		    		    
	G__anacatana.cxx
	)

target_link_libraries(anacatana ${ROOT_LIBRARIES} anacore)
ROOT_GENERATE_DICTIONARY(G__anacatana
  ${HEADERS}      
  LINKDEF anacatana_linkdef.hh
  )

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
		  DESTINATION include)

install(TARGETS anacatana
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if (${ROOT_VERSION} VERSION_GREATER "6.0")
   install(
      FILES
      ${CMAKE_CURRENT_BINARY_DIR}/libanacatana_rdict.pcm
      ${CMAKE_CURRENT_BINARY_DIR}/libanacatana.rootmap
      DESTINATION lib/)
endif (${ROOT_VERSION} VERSION_GREATER "6.0")
