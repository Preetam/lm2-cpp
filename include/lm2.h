#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

// In general, a negative return value indicates an error.

// lm2_collection_t is an opaque collection handle.
typedef struct lm2_collection_t lm2_collection_t;

lm2_collection_t*
lm2_collection_create(const char* path, int cache_size);

#ifdef __cplusplus
}
#endif // __cplusplus
