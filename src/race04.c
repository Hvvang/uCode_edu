#include "header.h"

int main (int argc, char *argv[]) { 
	checker(argc, argv);
	
	char *s1  = mx_file_to_str(argv[1]);
	mx_chech_sy(s1);
	int len = mx_strlen_coma(s1);
	int line = mx_count_line(s1);
	char *arr[line + 2];
	int line_size = mx_strlen_outcomline(s1);
	arr[0] = mx_strnew_hesh(line_size + 2);
	for (int i = 1; i < line + 1; i++) {
		arr[i] = mx_dupcoma(s1);
		while (*s1 != '\n') { 
				s1++;
		}
		if(line_size != mx_strlen(arr[i]) - 2) { // errlist 2
			mx_printerr(2);
		}
		s1++;
	}


	
	if(	(mx_atoi(argv[2]) > line_size || mx_atoi(argv[3]) > line)
	 || (mx_atoi(argv[2]) < 0 || mx_atoi(argv[3]) > line)
	 ||	(mx_atoi(argv[4]) > line_size || mx_atoi(argv[5]) > line)
	 || (mx_atoi(argv[4]) < 0 || mx_atoi(argv[5]) > line) )
	{
		mx_printerr(3);
	}
	
	if(arr[mx_atoi(argv[3]) + 1][mx_atoi(argv[2]) + 1] == '#') {
		mx_printerr(4);
	}
       
	if(arr[mx_atoi(argv[5]) + 1][mx_atoi(argv[4]) + 1] == '#') { 
        mx_printerr(5);
       }
	
	arr[line + 1] = mx_strnew_hesh(line_size + 2);
	mx_fill_arr(arr, line, len, mx_atoi(argv[2]) + 1, mx_atoi(argv[3]) + 1, mx_atoi(argv[4]) + 1, mx_atoi(argv[5]) + 1);
	mx_givepoint(arr, line);

	char c = '\n';
	int handle = open("path.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IROTH | S_IWUSR | S_IWOTH);
	if (handle == -1) { 
		mx_printerr(7);
	}
	for(int i = 1; i < line + 1; i++) {
		for(int j = 1; j < mx_strlen(arr[i]) - 1; j++) {
			write(handle, &arr[i][j], sizeof(arr[i][j]));
		}
		write(handle, &c, sizeof(char));
	}
	close(handle);

}
