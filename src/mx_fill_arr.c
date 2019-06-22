#include <stdio.h>
#include <stdbool.h>
#include "header.h"

bool mx_checker_dot(char c) {
	if(c == '.') {
		return true;
	}
	return false;
}

void mx_fill_next(char **arr, int x, int y, char i){
	if(arr[y][x] == i) {	
		if(mx_checker_dot(arr[y - 1][x])) {
			arr[y - 1][x] = i+1;
		}
		if(mx_checker_dot(arr[y][x + 1])) {
			arr[y][x + 1] = i+1;
		}
		if(mx_checker_dot(arr[y + 1][x])) {
			arr[y + 1][x] = i+1;
		}
		if(mx_checker_dot(arr[y][x - 1])) {
			arr[y][x - 1] = i+1;	
		}
	}
}

void mx_search_path(char **arr, int line) {
	char temp = '#';
	for(int i = 1; i < line + 2; i++) {
	    for(int j = 1; j < mx_strlen(arr[i]) ; j++) {
			if(arr[i][j] > temp) {
				temp = arr[i][j];
			}
		}
	}
	mx_printstr("dist=");
	mx_printint(temp - 48);
	mx_printchar('\n');
	for(int i = 1; i < line + 2; i++) {
        for(int j = 1; j < mx_strlen(arr[i]) ; j++) {
            if(arr[i][j] == temp) {
				arr[i][j] = '!';
			}
		}
	}
}

/*bool mx_checker_value(char c, char i) {
	if(c != '#' && c != '*' && c == i) {
		return true;
	}
	return false;
}

void mx_transform_next(char **arr, int x, int y, char i) {
	if(arr[y][x] == '*') {
    	if(mx_checker_value(arr[y - 1][x], i)) {
           arr[y - 1][x] = '*';
        } else if(mx_checker_value(arr[y][x + 1], i)) {
           arr[y][x + 1] = '*';
        } else if(mx_checker_value(arr[y + 1][x], i)) {
	        arr[y + 1][x] = '*';
        } else if(mx_checker_value(arr[y][x - 1], i)) {
            arr[y][x - 1] = '*';
        }
   }
}

void transform_to_star(char **arr, int line, int fx, int fy, char path) {
	arr[fy][fx]  = '*';
	while(path > '0') {
   		for(int i = 1; i < line + 2; i++) {
           for(int j = 1; j < mx_strlen(arr[i]) - 1 ; j++) {
                mx_transform_next(arr, i, j, path - 1);
            }
        }
	path--;
	}   

}
*/	
void mx_fill_arr(char **arr, int line, int len, int x, int y, int fx, int fy) {
	arr[y][x] = '0';
	printf("%d     %d\n", line, len);
	printf("%d     %d\n", fx, fy);
//	char count = '0';
//	char path;
//	int toggle = 0;
/*	while(count <= len) {
		for(int i = 1; i < line + 2; i++) {
			for(int j = 1; j < mx_strlen(arr[i]) - 1 ; j++) {
				mx_fill_next(arr, i, j, count);
				if(arr[fy][fx] != '.') {
					path = arr[fy][fx];
				}
			}
		}
		count++;
	}*/
//	if(arr[fy][fx] == '.') {
//        mx_printerr(6);
//	}
//	mx_search_path(arr, line);	
//	if(arr[fy][fx] == '!') {
//		toggle = 1;
//	}
//    mx_printstr("exit=");
//    mx_printint(path - 48);
//    mx_printchar('\n');
//	transform_to_star(arr, line, fx, fy, path);

//	arr[fy][fx] = (toggle) ? '+' : '*';
}	

