#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    const unsigned char *p = s;
    unsigned char ch = c;

    for(size_t i = 0; i < n; i++) {
        if(p[i] == ch) {
            return (void*)(p + i);
        }
    }

    return NULL;
}

