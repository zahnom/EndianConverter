//
// Created by Marc Zahno on 04.08.20.
//

#include "EndianConverter.h"

void BigEndian_UnsignedInt32ToArray(uint32_t integer, uint8_t array[4]){
    array[3] = integer;
    array[2] = integer >> 8;
    array[1] = integer >> 16;
    array[0] = integer >> 24;
}
uint32_t BigEndian_ArrayToUnsignedInt32(uint8_t array[4]){
    uint32_t integer = 0;

    integer += array[3];
    integer += array[2] << 8;
    integer += array[1] << 16;
    integer += array[0] << 24;

    return integer;
}

void BigEndian_SignedInt32ToArray(int32_t integer, uint8_t array[4]){
    BigEndian_UnsignedInt32ToArray((uint32_t)integer, array);
}
int32_t BigEndian_ArrayToSignedInt32(uint8_t array[4]){
    return (int32_t)BigEndian_ArrayToUnsignedInt32(array);
}

void BigEndian_UnsignedShort16ToArray(uint16_t integer, uint8_t array[2]){
    array[1] = integer;
    array[0] = integer >> 8;
}
uint16_t BigEndian_ArrayToUnsignedShort16(uint8_t array[2]){
    uint16_t integer = 0;

    integer += array[1];
    integer += array[0] << 8;

    return integer;
}

void BigEndian_SignedShort16ToArray(int16_t integer, uint8_t array[2]){
    BigEndian_UnsignedShort16ToArray((uint16_t)integer, array);
}
int16_t BigEndian_ArrayToSignedShort16(uint8_t array[2]){
    return (int16_t)BigEndian_ArrayToUnsignedShort16(array);
}