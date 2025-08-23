project(analoopencexample)

set(SRCS
src/TAlEncCATANAExample.cc
src/TAlEncDALIExample.cc
src/TAlEncESPRIExample.cc
src/TAlEncExample.cc
src/TAlEncGlobalExample.cc
src/TAlEncHIMEExample.cc
src/TAlEncICExample.cc
#src/TAlEncMINOSExample.cc
src/TAlEncMatrixExample.cc
src/TAlEncNEBULAExample.cc
src/TAlEncNEBULAHPCExample.cc
src/TAlEncNINJAExample.cc
src/TAlEncNeuLANDExample.cc
src/TAlEncPIDExample.cc
src/TAlEncPPACExample.cc
src/TAlEncPlasticExample.cc
src/TAlEncRPDCExample.cc
src/TAlEncRPTOFExample.cc
src/TAlEncRawDataExample.cc
src/TAlEncSAMURAIDCExample.cc
src/TAlEncSAMURAIFrag.cc
src/TAlEncSAMURAIHODExample.cc
src/TAlEncSAMURAIICExample.cc
src/TAlEncSAMURAINeutronExample.cc
src/TAlEncSAMURAIPlaExample.cc
src/TAlEncSAMURAITEDExample.cc
src/TAlEncSAMURAITZeroExample.cc
src/TAlEncSILICONSExample.cc
src/TAlEncWINDSExample.cc
src/listval.pl
)

set(HEADERS
include/EAnalyser.hh
include/EWNum.hh
include/TAlEncCATANAExample.hh
include/TAlEncDALIExample.hh
include/TAlEncESPRIExample.hh
include/TAlEncExample.hh
include/TAlEncGlobalExample.hh
include/TAlEncHIMEExample.hh
include/TAlEncICExample.hh
#include/TAlEncMINOSExample.hh
include/TAlEncMatrixExample.hh
include/TAlEncNEBULAExample.hh
include/TAlEncNEBULAHPCExample.hh
include/TAlEncNINJAExample.hh
include/TAlEncNeuLANDExample.hh
include/TAlEncPIDExample.hh
include/TAlEncPPACExample.hh
include/TAlEncPlasticExample.hh
include/TAlEncRPDCExample.hh
include/TAlEncRPTOFExample.hh
include/TAlEncRawDataExample.hh
include/TAlEncSAMURAIDCExample.hh
include/TAlEncSAMURAIFrag.hh
include/TAlEncSAMURAIHODExample.hh
include/TAlEncSAMURAIICExample.hh
include/TAlEncSAMURAINeutronExample.hh
include/TAlEncSAMURAIPlaExample.hh
include/TAlEncSAMURAITEDExample.hh
include/TAlEncSAMURAITZeroExample.hh
include/TAlEncSILICONSExample.hh
include/TAlEncWINDSExample.hh
)

include_directories(${CMAKE_SOURCE_DIR}/sources/Core/include)
include_directories(${CMAKE_SOURCE_DIR}/sources/Reconstruction/BigRIPS/include)
include_directories(${CMAKE_SOURCE_DIR}/sources/Reconstruction/DALI/include)
include_directories(${CMAKE_SOURCE_DIR}/sources/Reconstruction/CATANA/include)
include_directories(${CMAKE_SOURCE_DIR}/sources/Reconstruction/SAMURAI/include)
include_directories(${CMAKE_SOURCE_DIR}/sources/Reconstruction/ESPRI/include)
include_directories(${CMAKE_SOURCE_DIR}/sources/Reconstruction/SILICONS/include)
include_directories(${CMAKE_SOURCE_DIR}/sources/Reconstruction/WINDS/include)
include_directories(${CMAKE_SOURCE_DIR}/sources/AnaLoop/Core/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR})

add_library(analoopencexample SHARED
  ${SRCS}		    		    
  G__analoopencexample.cxx
  )

target_link_libraries(analoopencexample ${ROOT_LIBRARIES} anacore anabrips anadali anasamurai anacatana anaespri anasilicons anawinds analoop)
      
ROOT_GENERATE_DICTIONARY(G__analoopencexample
  ${HEADERS}	
  LINKDEF analoopencexample_linkdef.hh
  )

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
		  DESTINATION include)

install(TARGETS analoopencexample
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if (${ROOT_VERSION} VERSION_GREATER "6.0")
   install(
      FILES
      ${CMAKE_CURRENT_BINARY_DIR}/libanaloopencexample_rdict.pcm
      ${CMAKE_CURRENT_BINARY_DIR}/libanaloopencexample.rootmap
      DESTINATION lib/)
endif (${ROOT_VERSION} VERSION_GREATER "6.0")
