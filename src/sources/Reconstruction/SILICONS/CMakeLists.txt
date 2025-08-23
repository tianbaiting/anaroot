project(anasilicons)

set(SRCS
src/TArtCalibSILICONS.cc
src/TArtSILICONSParameters.cc
)

set(HEADERS
include/TArtCalibSILICONS.hh
include/TArtSILICONS.hh
include/TArtSILICONSPara.hh
include/TArtSILICONSParameters.hh
)

include_directories(${CMAKE_SOURCE_DIR}/sources/Core/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR} )

add_library(anasilicons SHARED
		    ${SRCS}		    		    
	G__anasilicons.cxx
	)

target_link_libraries(anasilicons ${ROOT_LIBRARIES} anacore)
ROOT_GENERATE_DICTIONARY(G__anasilicons
  ${HEADERS}      
  LINKDEF anasilicons_linkdef.hh
  )

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
		  DESTINATION include)

install(TARGETS anasilicons
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if (${ROOT_VERSION} VERSION_GREATER "6.0")
   install(
      FILES
      ${CMAKE_CURRENT_BINARY_DIR}/libanasilicons_rdict.pcm
      ${CMAKE_CURRENT_BINARY_DIR}/libanasilicons.rootmap
      DESTINATION lib/)
endif (${ROOT_VERSION} VERSION_GREATER "6.0")
