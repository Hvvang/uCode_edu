#include <stdbool.h>
#include <stdio.h>

int mx_strlen(const char *str);

bool mx_notsympol(char c) { 
	bool buf = false;
	if(c != '#' && c != '*'  && c != '+' && c != '!') {
		buf = true;
	}
	return buf;
}

void mx_givepoint(char **arr, int line) {
	for(int i = 1; i <= line ; i++) {
		for(int j= 1; j < mx_strlen(arr[i]); j++) { 
			if (mx_notsympol(arr[i][j])) { 
				arr[i][j] = '.';
			}
			if(arr[i][j] == '!') {
				arr[i][j] = 'D';
			}
			if(arr[i][j] == '+') {
				arr[i][j] = 'X';
			}
		}
	}
}
