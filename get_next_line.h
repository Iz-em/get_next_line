#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif

char	*get_next_line(int fd);
int     ft_strchr(char *s, char c);
char *ft_substr(char *s, int start ,int size);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t ft_strlen(const char *s);
char	*ft_calloc(size_t count, size_t n);
char	*ft_strdup(const char *s1);

#endif