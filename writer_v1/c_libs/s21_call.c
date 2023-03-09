#include "s21_calc.h"

char* s21_call(char *c_str2) {
    c_str2[2] = '\0';
    printf("%s\n", c_str2);
    return  c_str2;
}