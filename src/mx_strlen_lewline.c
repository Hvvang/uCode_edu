int mx_strlen_newline(const char *s)
{
     int i = 0;
     while (s[i] != '\n') {
         i++;
     }
     return i;
}
