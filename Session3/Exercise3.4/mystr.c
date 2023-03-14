#include <stdio.h>
#include "mystr.h"

int my_strlen(const char* str) {
    int i = 0;
    while(str[i] != '\0') {
        i += 1;
    }

    return i;
}

int my_strcmp(const char* str1, const char* str2) {
    int i = 0;
    
    while(str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] == str2[i]) {
            i++;
        } else {
            return -(str1[i] < str2[i]) + (str1[i] > str2[i]);
        }
    }

    if(str1[i] == '\0' && str1[i] != str2[i]) {
        return -(str1[i] < str2[i]) + (str1[i] > str2[i]);
    }

    return 0;
}

char* my_strcpy(char* dest, const char* src) {
    int i = 0;

    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    dest[i++] = '\0';
    return dest;
}

char* my_strdup(const char* str) {
    char t[sizeof(str)];
    return my_strcpy(t, &str);
}