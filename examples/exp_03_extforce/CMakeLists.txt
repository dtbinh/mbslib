add_executable(exp_03_extforce exp_03_extforce.cpp)
if(USE_ADOLC)
target_link_libraries(exp_03_extforce mbslib ${ADOLC_LIBRARIES})
ELSE(USE_ADOLC)
target_link_libraries(exp_03_extforce mbslib)
endif(USE_ADOLC)
