project(analoop)

set(SRCS
src/TAlEncBranch.cc
src/TAlEncFillTree.cc
src/TAlEncGate.cc
src/TAlEncHist.cc
src/TAlEncPrint.cc
src/TAlEncStop.cc
src/TAlEncSub.cc
src/TAlRawDataExample.cc
src/TArtAnaClock.cc
src/TArtAnaFile.cc
src/TArtAnaLoop.cc
src/TArtAnaLoopManager.cc
)

set(HEADERS
include/TAlEncBranch.hh
include/TAlEncFactory.hh
include/TAlEncFillTree.hh
include/TAlEncGate.hh
include/TAlEncHist.hh
include/TAlEncPrint.hh
include/TAlEncStop.hh
include/TAlEncSub.hh
include/TAlRawDataExample.hh
include/TArtAnaClock.hh
include/TArtAnaFile.hh
include/TArtAnaLoop.hh
include/TArtAnaLoopManager.hh
)

include_directories(${CMAKE_SOURCE_DIR}/sources/Core/include)
include_directories(${CMAKE_SOURCE_DIR}/sources/Nadeko/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR})

add_library(analoop SHARED
  ${SRCS}		    		    
  G__analoop.cxx
  )

target_link_libraries(analoop ${ROOT_LIBRARIES} anacore ananadeko)
      
ROOT_GENERATE_DICTIONARY(G__analoop
  ${HEADERS}	
  LINKDEF analoop_linkdef.hh
  )

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
		  DESTINATION include)

install(TARGETS analoop
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if (${ROOT_VERSION} VERSION_GREATER "6.0")
   install(
      FILES
      ${CMAKE_CURRENT_BINARY_DIR}/libanaloop_rdict.pcm
      ${CMAKE_CURRENT_BINARY_DIR}/libanaloop.rootmap
      DESTINATION lib/)
endif (${ROOT_VERSION} VERSION_GREATER "6.0")
