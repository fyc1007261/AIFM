#pragma once

#include "helpers.hpp"

FORCE_INLINE void xor_bytes(uint8_t *dest,
                            uint8_t *src1,
                            uint8_t *src2,
                            uint32_t len)
{
    for (uint32_t i = 0; i < len; ++i)
    {
        dest[i] = src1[i] ^ src2[i];
    }
}

FORCE_INLINE void dump_bytes(const uint8_t* addr, uint32_t len)
{
     for (uint32_t i = 0; i < len; i++) {
        printf("%02x ", addr[i]);
    }
    printf("\n");
}