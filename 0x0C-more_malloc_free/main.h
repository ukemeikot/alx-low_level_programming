#ifndef MAIN_H
#define MAIN_H
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isNumeric(char *str);
int _isdigit(int c);
int _atoi(char *s);
#endif
