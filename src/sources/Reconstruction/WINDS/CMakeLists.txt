project(anawinds)

set(SRCS
src/TArtCalibWINDSPla.cc
src/TArtWINDSParameters.cc
)

set(HEADERS
include/TArtCalibWINDSPla.hh
include/TArtWINDSParameters.hh
include/TArtWINDSPla.hh
include/TArtWINDSPlaPara.hh
)

include_directories(${CMAKE_SOURCE_DIR}/sources/Core/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR} )

add_library(anawinds SHARED
		    ${SRCS}		    		    
	G__anawinds.cxx
	)

target_link_libraries(anawinds ${ROOT_LIBRARIES} anacore)
ROOT_GENERATE_DICTIONARY(G__anawinds
  ${HEADERS}      
  LINKDEF anawinds_linkdef.hh
  )

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
		  DESTINATION include)

install(TARGETS anawinds
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if (${ROOT_VERSION} VERSION_GREATER "6.0")
   install(
      FILES
      ${CMAKE_CURRENT_BINARY_DIR}/libanawinds_rdict.pcm
      ${CMAKE_CURRENT_BINARY_DIR}/libanawinds.rootmap
      DESTINATION lib/)
endif (${ROOT_VERSION} VERSION_GREATER "6.0")
