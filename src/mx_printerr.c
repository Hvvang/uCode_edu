#include "header.h"

const char *err_arr[] = {
     "usage: ./race04 [file_name] [x1] [y1] [x2] [y2]\n",
     "map does not exist\n",
     "map error\n",
     "points are out of map range\n",
     "entry point cannot be an obstacle\n",
     "exit point cannot be an obstacle\n",
     "route not found\n",
     "error\n"
 };

void mx_printerr(int index) {
	write(2, err_arr[index], mx_strlen(err_arr[index]));
    exit(0);
}
