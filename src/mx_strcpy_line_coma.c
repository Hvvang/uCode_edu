#include <stdio.h>
#include <unistd.h>

char *mx_strcpy_line_coma(char *dst, const char *src) {
    int i = 0;
	int num = 0;
	*dst = '#';
	dst ++;
	while(*src != '\n') {
		if (*src != ',') {
			*dst = *src;
			num++;
			dst++;
		}
		src++;
		i++;
    }
	*dst = '#';
	dst++;
    *dst = '\0';
	dst = dst - (num + 2);
    return dst - num;
}
