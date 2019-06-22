#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

int mx_count_line(const char *str) {
   int n = 0;
   for ( ; *str != '\0'; str++) {
      	if (*str == '\n') {
			n ++;
		}
	}
   return n;
}
