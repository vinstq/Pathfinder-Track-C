#include "libmx.h"

int mx_sqrt (int x) {
    for(int i = 1; i < x; i++) {
        if(i * i == x)
            return i;
    }
    return 0;
}



