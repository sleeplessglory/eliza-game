#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

long VAL(char *string) {
    char *endptr;
    return strtol(string, &endptr, 10);
}

void input_string(char **p_target) {
    *p_target = malloc(512);
    input(*p_target);
    strtok(*p_target, "\n");
}

void input_number(int *p_target) {
    char *p_number_as_string;
    input_string(&p_number_as_string);
    *p_target = VAL(p_number_as_string);
}