#include "libmx.h"

char *mx_strtrim(const char *str) {
    if(str == NULL) {
        return NULL;
    }

    while(mx_isspace(*str) == true) {
        str++;
    }
    
    int len = mx_strlen(str);

    while(mx_isspace(str[len - 1]) == true) {
        len--;
    }
    
    return mx_strndup(str, len);
}



