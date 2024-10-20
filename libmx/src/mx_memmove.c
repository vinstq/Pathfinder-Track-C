#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    unsigned char *d = dst;
    const unsigned char *s = src;

    if(d == s || len == 0) {
        return dst;
    }
    if(d < s) {
        mx_memcpy(dst, src, len);
    }
    else {
        for(size_t i = len; i > 0; i--) {
            d[i - 1] = s[i - 1];
        }
    }
    return dst;
}


