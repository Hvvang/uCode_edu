#include <stdlib.h>
#include <stdio.h>

int mx_strlen_coma(const char *s);
char *mx_strcpy_line_coma(char *dst, const char *src);
char *mx_strnew(const int size);
int mx_strlen_newline(const char *s);

char *mx_dupcoma(const char  *str){
    if(str == NULL){
	return NULL;
    }
    int len = mx_strlen_newline(str);
    char *buf = mx_strnew(len + 2);
    mx_strcpy_line_coma(buf,str);
    return buf; 
}
