#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>



void mx_printerr(int index);
char *mx_file_to_str(const char *filename);
int mx_strlen(const char *str);
int mx_count_line(const char *str);
int mx_strlen_coma(const char *s);
char *mx_dupcoma(const char  *str);
void mx_fill_arr(char **arr, int line, int len, int x, int y, int fx, int fy);
char *mx_strnew_hesh(const int size);
int mx_strlen_newline(const char *s);
void mx_printstr(const char *s);
void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen_outcomline(const char *s);
void mx_givepoint(char **c, int line);
int mx_atoi(const char *str);
void checker(int argc, char *argv[]);
void  mx_chech_sy(char *s1);

#endif
