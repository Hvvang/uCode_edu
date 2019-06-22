#include <stdlib.h>

char *mx_strnew_hesh(const int size)
{
    char *buf;
    if (size < 0 || size > 2147483646) {
         return NULL;
    }
    buf  = (char *) malloc(sizeof(char) * (size + 1));
    if(buf == NULL){
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        buf[i] = '#';
    }
	buf[size] = '\0'; 
     return buf;
}
