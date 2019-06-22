#include<stdbool.h>

bool mx_isspace(char c);
bool mx_isdigit(int c);

int mx_atoi(const char *str){
    int sign = 1;
    long int res = 0;

    while(mx_isspace(*str)) {
        str++;
    }
    if(*str == '-' || *str == '+'){
        if(*str == '-') {
            sign = -1;
        }
        str++;
    }
    while (mx_isdigit(*str)) {
        res = res * 10 + (*str - 48);
        str++;
    }
    return res * sign;
}
