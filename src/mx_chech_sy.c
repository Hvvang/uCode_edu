#include "header.h"

void  mx_chech_sy(char *s1) {
	int len = mx_strlen(s1);
	for(int i = 0; i < len; i++) {
		if(s1[i] != '\n' && s1[i] != '#' && s1[i] != ',' && s1[i] != '.') { 
			mx_printerr(2);
		}
	}
}
