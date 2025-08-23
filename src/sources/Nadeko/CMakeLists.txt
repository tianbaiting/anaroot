project(ananadeko)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR})

set(SRCS
src/TArtAlias.cc
src/TArtCanvasManager.cc
src/TArtExec.cc
src/TArtGlobal.cc
src/TArtHistManager.cc
src/TArtObjLinkManager.cc
src/TArtSimpleFunction.cc
src/TArtTreeManager.cc
)

set(HEADERS
include/TArtAlias.hh
include/TArtCanvasManager.hh
include/TArtExec.hh
include/TArtGlobal.hh
include/TArtHistManager.hh
include/TArtObjLinkManager.hh
include/TArtSimpleFunction.hh
include/TArtTreeManager.hh
)

ROOT_GENERATE_DICTIONARY(G__ananadeko
	${HEADERS}	
	LINKDEF ananadeko_linkdef.hh
)

add_library(ananadeko SHARED
		    ${SRCS}		    		    
	G__ananadeko.cxx
	)

target_link_libraries(ananadeko ${ROOT_LIBRARIES})

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
		  DESTINATION include)

install(TARGETS ananadeko
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if (${ROOT_VERSION} VERSION_GREATER "6.0")
   install(
      FILES
      ${CMAKE_CURRENT_BINARY_DIR}/libananadeko_rdict.pcm
      ${CMAKE_CURRENT_BINARY_DIR}/libananadeko.rootmap
      DESTINATION lib/)
endif (${ROOT_VERSION} VERSION_GREATER "6.0")
