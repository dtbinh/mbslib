add_executable(exp_13_springs_2 exp_13_springs_2.cpp)
target_link_libraries(exp_13_springs_2 mbslib)
if(USE_ADOLC)
 target_link_libraries(exp_13_springs_2 ${ADOLC_LIBRARIES})
endif(USE_ADOLC)