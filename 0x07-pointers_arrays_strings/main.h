#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdio.h>
char *_strchr(char *s, char c);
void set_string(char **s, char *to);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void *_memcpy(void *dest, const void *src, size_t n);
void *_memset(void *s, int c, size_t n);
int _putchar(char c);
#endif
