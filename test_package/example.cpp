#include <iostream>

extern "C" {
    #include "EndianConverter.h"
}

int main() {
    uint32_t integer = 123456789;
    uint8_t array[4] = {0};

    BigEndian_UnsignedInt32ToArray(integer, array);
    uint32_t result = BigEndian_ArrayToUnsignedInt32(array);

    if(result == integer) {
        printf("Package has been successfully installed!\n");
        return EXIT_SUCCESS;
    }

    return EXIT_FAILURE;
}
