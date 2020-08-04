//
// Created by Marc Zahno on 09.05.20.
//

extern "C" {
    #include "EndianConverter.h"
}

#include "gtest/gtest.h"

namespace EndianConverter {
    using namespace std;

    TEST(Convert32BitBigEndian){
        uint32_t integer = 342;
        uint8_t array[4] = {0};

        BigEndian_32_IntToArray(integer, array);
        ASSERT_

    }
}