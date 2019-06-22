#include <unistd.h>
int mx_strlen(const char *s);

void mx_printstr(const char *s) {
    int size = mx_strlen(&s[0]);
    write(1, s, size);	
}
