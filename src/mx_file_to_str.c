#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int mx_strlen(const char *str);
char *mx_strnew(const int length);

char *mx_file_to_str(const char* filename){
    int fd_dst = open(filename, O_RDWR | O_EXCL, 0666);
    if(fd_dst < 0) 
        return NULL;

    int rd;
    int cntr = 0;
    
    char buf[1];

    while((rd = read(fd_dst, buf, 1)) && buf[0] != EOF){
        if(rd < 0)
            return NULL;
        cntr++;
    }

    int cd = close(fd_dst);
    if(cd == -1)
        return NULL;

    fd_dst = open(filename, O_RDONLY | O_EXCL, 0666);
    if(fd_dst < 0)
        return NULL;

    char *new_str = mx_strnew(cntr);
    if(!new_str)
        return NULL;

    rd = read(fd_dst, new_str, cntr);
    if (rd == -1) 
            return NULL;

    cd = close(fd_dst);
    if(cd < 0)
        return NULL;
    
    return new_str;
}
