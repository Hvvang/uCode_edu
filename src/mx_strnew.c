#include <stdlib.h>

char *mx_strnew(const int size)
{
	char *buf;
	if (size < 0 || size > 2147483646) {
		return NULL;
	}
	buf  = (char *) malloc(sizeof(char) * (size + 1));
	if(buf == NULL){
		return NULL;
	}
	for (int i = 0; i < size + 1; i++) {
		buf[i] = '\0';
	}
	return buf;
}
