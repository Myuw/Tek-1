/*
** EPITECH PROJECT, 2019
** get_next_line
** File description:
** header
*/

#ifndef READ_SIZE
#define READ_SIZE 1

#endif

#ifndef GET_NEXT_LINE
#define GET_NEXT_LINE

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char *get_next_line(int fd);

char *free_buffer(char *buffer);

char *my_strcat(char *s1, char *s2);

char *my_strcpy(char *dest, char const *src);

int check_buffer(char const *buffer, int n);

#endif
