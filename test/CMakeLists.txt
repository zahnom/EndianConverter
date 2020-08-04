add_executable(GoogleTestsRun main.cpp EndianConverterTest.cpp)

include_directories(${PROJECT_SOURCE_DIR}/src)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${crc_SOURCE_DIR})

target_link_libraries(GoogleTestsRun EndianConverter gtest gtest_main)