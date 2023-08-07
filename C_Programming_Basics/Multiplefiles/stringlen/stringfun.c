#include"stringlen.h"
#include<stdio.h>


int stringlength(const char *str) {
    const char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - str;
}


