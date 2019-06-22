#include "header.h"

void checker(int argc, char *argv[]) {
	if(argc != 6) { // checker on error argc num
		mx_printerr(0);
	} else {
			int handle = open(argv[1], O_RDONLY);
			int size = 0;
			char c;
			while(read(handle, &c, sizeof(c)) > 0) {
				size++;
			}
			close(handle);
			if(size == 0) {
				mx_printerr(1);
			}
		}

}

