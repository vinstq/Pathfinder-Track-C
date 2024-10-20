#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    const char *needle = sub;
    int total = 0;
    const char *p = str;
    while ((p=mx_strstr(p,needle)) != 0 ) {
        p++;
        total++;
    }
    return total;
}



