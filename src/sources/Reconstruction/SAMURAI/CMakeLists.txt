project(anasamurai)

set(SRCS
  src/DCConfMan.cc
  src/DCGeomRecord.cc
  src/FieldMan.cc
  src/MathTools.cc
  src/RungeKuttaUtilities.cc
  src/SAMURAIFieldMap.cc
  src/TArtCalcGlobalTrack.cc
  src/TArtCalibBDC1Hit.cc
  src/TArtCalibBDC1Track.cc
  src/TArtCalibBDC2Hit.cc
  src/TArtCalibBDC2Track.cc
  src/TArtCalibBPCHit.cc
  src/TArtCalibDCHit.cc
  src/TArtCalibDCTrack.cc
  src/TArtCalibFDC0Hit.cc
  src/TArtCalibFDC0Track.cc
  src/TArtCalibFDC1Hit.cc
  src/TArtCalibFDC1Track.cc
  src/TArtCalibFDC2Hit.cc
  src/TArtCalibFDC2Track.cc
  src/TArtCalibHIME.cc
  src/TArtCalibHODPla.cc
  src/TArtCalibICF.cc
  src/TArtCalibNEBULA.cc
  src/TArtCalibNEBULAHPC.cc
  src/TArtCalibNINJA.cc
  src/TArtCalibNeuLAND.cc
  src/TArtCalibNeuLANDVETO.cc
  src/TArtCalibPDCHit.cc
  src/TArtCalibPDCTrack.cc
  src/TArtCalibRPDCHit.cc
  src/TArtCalibRPDCTrack.cc
  src/TArtCalibRPTOFPla.cc
  src/TArtCalibS1DC1Hit.cc
  src/TArtCalibS1DC1Track.cc
  src/TArtCalibS1DC2Hit.cc
  src/TArtCalibS1DC2Track.cc
  src/TArtCalibSAMURAI.cc
  src/TArtCalibSAMURAITZero.cc
  src/TArtCalibSimpleBDC1Track.cc
  src/TArtCalibSimpleBDC2Track.cc
  src/TArtCalibSimpleDCTrack.cc
  src/TArtCalibSimpleFDC0Track.cc
  src/TArtCalibSimpleFDC1Track.cc	
  src/TArtCalibSimpleFDC2Track.cc
  src/TArtCalibTEDCsI.cc
  src/TArtHIMEFilter.cc
  src/TArtNEBULAFilter.cc
  src/TArtRecoFragment.cc
  src/TArtRecoNeutron.cc
  src/TArtRecoSAMURAI.cc
  src/TArtSAMURAIParameters.cc
)

set(HEADERS
  include/DCConfMan.hh
  include/DCGeomRecord.hh
  include/FieldMan.hh
  include/MathTools.hh
  include/RungeKuttaUtilities.hh
  include/SAMURAIFieldMap.hh
  include/TArtCalcGlobalTrack.hh
  include/TArtCalibBDC1Hit.hh
  include/TArtCalibBDC1Track.hh
  include/TArtCalibBDC2Hit.hh
  include/TArtCalibBDC2Track.hh
  include/TArtCalibBPCHit.hh
  include/TArtCalibDCHit.hh
  include/TArtCalibDCTrack.hh
  include/TArtCalibFDC0Hit.hh
  include/TArtCalibFDC0Track.hh
  include/TArtCalibFDC1Hit.hh
  include/TArtCalibFDC1Track.hh
  include/TArtCalibFDC2Hit.hh
  include/TArtCalibFDC2Track.hh
  include/TArtCalibHIME.hh
  include/TArtCalibHODPla.hh
  include/TArtCalibICF.hh
  include/TArtCalibNEBULA.hh
  include/TArtCalibNEBULAHPC.hh
  include/TArtCalibNINJA.hh
  include/TArtCalibNeuLAND.hh
  include/TArtCalibNeuLANDVETO.hh
  include/TArtCalibPDCHit.hh
  include/TArtCalibPDCTrack.hh
  include/TArtCalibRPDCHit.hh
  include/TArtCalibRPDCTrack.hh
  include/TArtCalibRPTOFPla.hh
  include/TArtCalibS1DC1Hit.hh
  include/TArtCalibS1DC1Track.hh
  include/TArtCalibS1DC2Hit.hh
  include/TArtCalibS1DC2Track.hh
  include/TArtCalibSAMURAI.hh
  include/TArtCalibSAMURAITZero.hh
  include/TArtCalibSimpleBDC1Track.hh
  include/TArtCalibSimpleBDC2Track.hh
  include/TArtCalibSimpleDCTrack.hh
  include/TArtCalibSimpleFDC0Track.hh
  include/TArtCalibSimpleFDC1Track.hh
  include/TArtCalibSimpleFDC2Track.hh
  include/TArtCalibTEDCsI.hh
  include/TArtDCHit.hh
  include/TArtDCHitPara.hh
  include/TArtDCTrack.hh
  include/TArtFragment.hh
  include/TArtHIMEFilter.hh
  include/TArtHIMEPla.hh
  include/TArtHIMEPlaPara.hh
  include/TArtHODPla.hh
  include/TArtHODPlaPara.hh
  include/TArtICF.hh
  include/TArtNEBULAFilter.hh
  include/TArtNEBULAHPC.hh
  include/TArtNEBULAHPCPara.hh
  include/TArtNEBULAPla.hh
  include/TArtNEBULAPlaPara.hh
  include/TArtNINJAPla.hh
  include/TArtNINJAPlaPara.hh
  include/TArtNeuLANDPla.hh
  include/TArtNeuLANDPlaPara.hh
  include/TArtNeutron.hh
  include/TArtRPTOFPla.hh
  include/TArtRPTOFPlaPara.hh
  include/TArtRecoFragment.hh
  include/TArtRecoNeutron.hh
  include/TArtRecoSAMURAI.hh
  include/TArtSAMURAIParameters.hh
  include/TArtTEDCsI.hh
  include/TArtTEDCsIPara.hh
  include/TArtTZero.hh
  include/TArtTacquilaMap.hh
)

include_directories(${CMAKE_SOURCE_DIR}/sources/Core/include)
include_directories(${CMAKE_SOURCE_DIR}/sources/Reconstruction/BigRIPS/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR})

add_library(anasamurai SHARED
		    ${SRCS}		    		    
	G__anasamurai.cxx
	)

target_link_libraries(anasamurai ${ROOT_LIBRARIES} anacore anabrips)
ROOT_GENERATE_DICTIONARY(G__anasamurai
  ${HEADERS}      
  LINKDEF anasamurai_linkdef.hh
  )

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
		  DESTINATION include)

install(TARGETS anasamurai
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if (${ROOT_VERSION} VERSION_GREATER "6.0")
   install(
      FILES
      ${CMAKE_CURRENT_BINARY_DIR}/libanasamurai_rdict.pcm
      ${CMAKE_CURRENT_BINARY_DIR}/libanasamurai.rootmap
      DESTINATION lib/)
endif (${ROOT_VERSION} VERSION_GREATER "6.0")
