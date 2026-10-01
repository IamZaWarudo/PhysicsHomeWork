cmake_minimum_required(VERSION 3.16)
project(CompPhyHW1 LANGUAGE CXX)

find_package(Matplot++ REQUIRED)

add_executable(CompPhyHW1 CompPhyHW1.cxx)
target_compile_features(CompPhyHW1 PRIVATE cxx_std_17)
target_link_libraries(CompPhyHW1 PRIVATE Matplot++::matplot)
