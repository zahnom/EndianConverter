//
// Created by Marc Zahno on 09.05.20.
//

extern "C" {
    #include "EndianConverter.h"
}

#include "gtest/gtest.h"

namespace EndianConverter {
    using namespace std;

    TEST(BigEndianTests, ConvertUnsigned32Bit){
        uint32_t integer = 123456789;
        uint8_t array[4] = {0};

        // 123456789 (dec) equals to 0x075bcd15 (hex)
        BigEndian_UnsignedInt32ToArray(integer, array);
        ASSERT_EQ(0x07,array[0]);
        ASSERT_EQ(0x5b,array[1]);
        ASSERT_EQ(0xcd,array[2]);
        ASSERT_EQ(0x15,array[3]);

        // Convert back to integer
        uint32_t result = BigEndian_ArrayToUnsignedInt32(array);
        ASSERT_EQ(integer, result);
    }
    TEST(BigEndianTests, ConvertSigned32Bit){
        int32_t integer = -1234567;
        uint8_t array[4] = {0};

        // -1234567 (dec) equals to 0xffed2979 (hex)
        BigEndian_SignedInt32ToArray(integer, array);
        ASSERT_EQ(0xff,array[0]);
        ASSERT_EQ(0xed,array[1]);
        ASSERT_EQ(0x29,array[2]);
        ASSERT_EQ(0x79,array[3]);

        // Convert back to integer
        uint32_t result = BigEndian_ArrayToSignedInt32(array);
        ASSERT_EQ(integer, result);
    }
    TEST(BigEndianTests, ConvertUnsigned16Bit){
        uint16_t integer = 12345;
        uint8_t array[2] = {0};

        // 12345 (dec) equals to 0x3039 (hex)
        BigEndian_UnsignedShort16ToArray(integer, array);
        ASSERT_EQ(0x30,array[0]);
        ASSERT_EQ(0x39,array[1]);

        // Convert back to integer
        uint16_t result = BigEndian_ArrayToUnsignedShort16(array);
        ASSERT_EQ(integer, result);
    }
    TEST(BigEndianTests, ConvertSigned16Bit){
        int16_t integer = -1234;
        uint8_t array[2] = {0};

        // -1234 (dec) equals to 0xfb2e (hex)
        BigEndian_SignedShort16ToArray(integer, array);
        ASSERT_EQ(0xfb,array[0]);
        ASSERT_EQ(0x2e,array[1]);

        // Convert back to integer
        int16_t result = BigEndian_ArrayToSignedShort16(array);
        ASSERT_EQ(integer, result);
    }
}