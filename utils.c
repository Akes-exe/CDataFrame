/*
 * Project: CDataFrame
 * Authors: Alban Pascal and Maxime Colin
 * Role: This file contains utility functions for common operations used within the CDataFrame Management System.
 */

#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Converts a string of digits into an array of integers.
int* string_to_int_array(const char* str, int* size) {
    *size = strlen(str);
    int* array = (int*)malloc(*size * sizeof(int));
    if (array == NULL) {
        perror("Unable to allocate memory");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < *size; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            array[i] = str[i] - '0';
        } else {
            fprintf(stderr, "Invalid character encountered: %c\n", str[i]);
            free(array);
            exit(EXIT_FAILURE);
        }
    }

    return array;
}