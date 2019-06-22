int mx_strlen_outcomline(const char *s)
{
    int i = 0;
    int num = 0;

    while (s[i] != '\n')
    {
    	if (s[i] != ',') {
        	num ++;
        }
        i++;
    }
	return num;
}
