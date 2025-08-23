project(anaminos)

set(SRCS
src/TArtAnalyzedDSSSD.cc
src/TArtAnalyzedMINOS.cc
src/TArtAnalyzedTracker.cc
src/TArtCalibMINOS.cc
src/TArtMINOSParameters.cc
src/TArtTrackMINOS.cc
src/TArtVertexMINOS.cc
)

set(HEADERS
include/TArtAnalyzedDSSSD.hh
include/TArtAnalyzedDSSSDData.hh
include/TArtAnalyzedMINOS.hh
include/TArtAnalyzedMINOSData.hh
include/TArtAnalyzedTracker.hh
include/TArtAnalyzedTrackerData.hh
include/TArtCalibMINOS.hh
include/TArtCalibMINOSData.hh
include/TArtMINOSMap.hh
include/TArtMINOSPara.hh
include/TArtMINOSParameters.hh
include/TArtTrackMINOS.hh
include/TArtTrackMINOSData.hh
include/TArtVertexMINOS.hh
include/parameterMINOS.dat
)

include_directories(${CMAKE_SOURCE_DIR}/sources/Core/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR} )

add_library(anaminos SHARED
		    ${SRCS}		    		    
	G__anaminos.cxx
	)

target_link_libraries(anaminos ${ROOT_LIBRARIES} anacore)
ROOT_GENERATE_DICTIONARY(G__anaminos
  ${HEADERS}      
  LINKDEF anaminos_linkdef.hh
  )

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
		  DESTINATION include)

install(TARGETS anaminos
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if (${ROOT_VERSION} VERSION_GREATER "6.0")
   install(
      FILES
      ${CMAKE_CURRENT_BINARY_DIR}/libanaminos_rdict.pcm
      ${CMAKE_CURRENT_BINARY_DIR}/libanaminos.rootmap
      DESTINATION lib/)
endif (${ROOT_VERSION} VERSION_GREATER "6.0")
