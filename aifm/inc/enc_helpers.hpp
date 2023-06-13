#pragma once

void xor_bytes(uint8_t *dest, uint8_t *src1,
               uint8_t *src2, uint32_t len);
void dump_bytes(const uint8_t* addr, uint32_t len);
#include "internal/enc_helpers.ipp"
