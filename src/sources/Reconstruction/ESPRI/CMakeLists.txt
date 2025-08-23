project(anaespri)

set(SRCS
  src/TArtCalibBDC.cc
  src/TArtCalibBLD.cc
  src/TArtCalibDia.cc
  src/TArtCalibFADC.cc
  src/TArtCalibPlas.cc
  src/TArtCalibRDC.cc
  src/TArtCalibRNaI.cc
  src/TArtCalibTDCHit.cc
  src/TArtESPRIParameters.cc
  src/TArtUserParameters.cc
)

set(HEADERS
  include/TArtBDC.hh
  include/TArtBLD.hh
  include/TArtCalibBDC.hh
  include/TArtCalibBLD.hh
  include/TArtCalibDia.hh
  include/TArtCalibFADC.hh
  include/TArtCalibPlas.hh
  include/TArtCalibRDC.hh
  include/TArtCalibRNaI.hh
  include/TArtCalibTDCHit.hh
  include/TArtDia.hh
  include/TArtESPRIParameters.hh
  include/TArtFADC.hh
  include/TArtFADCPara.hh
  include/TArtPlas.hh
  include/TArtPlasPara.hh
  include/TArtRDC.hh
  include/TArtRNaI.hh
  include/TArtRNaIPara.hh
  include/TArtTDCHit.hh
  include/TArtTDCHitPara.hh
  include/TArtUserParameters.hh
)

include_directories(${CMAKE_SOURCE_DIR}/sources/Core/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR} )

add_library(anaespri SHARED
		    ${SRCS}		    		    
	G__anaespri.cxx
	)

target_link_libraries(anaespri ${ROOT_LIBRARIES} anacore)
ROOT_GENERATE_DICTIONARY(G__anaespri
  ${HEADERS}      
  LINKDEF anaespri_linkdef.hh
  )

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
		  DESTINATION include)

install(TARGETS anaespri
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if (${ROOT_VERSION} VERSION_GREATER "6.0")
   install(
      FILES
      ${CMAKE_CURRENT_BINARY_DIR}/libanaespri_rdict.pcm
      ${CMAKE_CURRENT_BINARY_DIR}/libanaespri.rootmap
      DESTINATION lib/)
endif (${ROOT_VERSION} VERSION_GREATER "6.0")
