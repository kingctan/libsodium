#ifndef crypto_hash_H
#define crypto_hash_H

#include "crypto_hash_sha512.h"

#define crypto_hash_BYTES crypto_hash_sha512_BYTES
#define crypto_hash_PRIMITIVE "sha512"

int crypto_hash(unsigned char *out, const unsigned char *in,
                unsigned long long inlen);

#endif
