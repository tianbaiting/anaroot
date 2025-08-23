project(anabrips)

set(SRCS
  src/TArtBigRIPSParameters.cc
  src/TArtCalibCoin.cc
  src/TArtCalibFocalPlane.cc
  src/TArtCalibGe.cc
  src/TArtCalibIC.cc
  src/TArtCalibPID.cc
  src/TArtCalibPPAC.cc
  src/TArtCalibPlastic.cc
  src/TArtCalibSi.cc
  src/TArtCalibTKE.cc
  src/TArtRIPSPara.cc
  src/TArtRecoBeam.cc
  src/TArtRecoPID.cc
  src/TArtRecoRIPS.cc
  src/TArtRecoTOF.cc
)

set(HEADERS
  include/TArtBeam.hh
  include/TArtBeamPara.hh
  include/TArtBigRIPSParameters.hh
  include/TArtCalibCoin.hh
  include/TArtCalibFocalPlane.hh
  include/TArtCalibGe.hh
  include/TArtCalibIC.hh
  include/TArtCalibPID.hh
  include/TArtCalibPPAC.hh
  include/TArtCalibPlastic.hh
  include/TArtCalibSi.hh
  include/TArtCalibTKE.hh
  include/TArtFocalPlane.hh
  include/TArtFocalPlanePara.hh
  include/TArtGe.hh
  include/TArtGePara.hh
  include/TArtIC.hh
  include/TArtICPara.hh
  include/TArtOptMatrix.hh
  include/TArtPPAC.hh
  include/TArtPPACPara.hh
  include/TArtPlastic.hh
  include/TArtPlasticPara.hh
  include/TArtRIPS.hh
  include/TArtRIPSPara.hh
  include/TArtRecoBeam.hh
  include/TArtRecoPID.hh
  include/TArtRecoRIPS.hh
  include/TArtRecoTOF.hh
  include/TArtSi.hh
  include/TArtSiPara.hh
  include/TArtTKE.hh
  include/TArtTKEPara.hh
  include/TArtTOF.hh
  include/TArtTOFPara.hh
)

include_directories(${CMAKE_SOURCE_DIR}/sources/Core/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR} )

add_library(anabrips SHARED
		    ${SRCS}		    		    
	G__anabrips.cxx
	)

target_link_libraries(anabrips ${ROOT_LIBRARIES} anacore)
ROOT_GENERATE_DICTIONARY(G__anabrips
  ${HEADERS}      
  LINKDEF anabrips_linkdef.hh
  )

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
		  DESTINATION include)

install(TARGETS anabrips
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if (${ROOT_VERSION} VERSION_GREATER "6.0")
   install(
      FILES
      ${CMAKE_CURRENT_BINARY_DIR}/libanabrips_rdict.pcm
      ${CMAKE_CURRENT_BINARY_DIR}/libanabrips.rootmap
      DESTINATION lib/)
endif (${ROOT_VERSION} VERSION_GREATER "6.0")
