//
// Created by Marc Zahno on 04.08.20.
//

#ifndef ENDIANCONVERTER_ENDIANCONVERTER_H
#define ENDIANCONVERTER_ENDIANCONVERTER_H

#include <stdint.h>

void BigEndian_UnsignedInt32ToArray(uint32_t integer, uint8_t *array);
uint32_t BigEndian_ArrayToUnsignedInt32(uint8_t *array);

void BigEndian_SignedInt32ToArray(int32_t integer, uint8_t *array);
int32_t BigEndian_ArrayToSignedInt32(uint8_t *array);

void BigEndian_UnsignedShort16ToArray(uint16_t integer, uint8_t *array);
uint16_t BigEndian_ArrayToUnsignedShort16(uint8_t *array);

void BigEndian_SignedShort16ToArray(int16_t integer, uint8_t *array);
int16_t BigEndian_ArrayToSignedShort16(uint8_t *array);

#endif //ENDIANCONVERTER_ENDIANCONVERTER_H
