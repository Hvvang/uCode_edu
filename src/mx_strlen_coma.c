int mx_strlen_coma(const char *s)
{

    int i = 0;
	int num = 0;

    while (s[i] != '\0')
    {
		if (s[i] != ',' && s[i] != '\n') {
        	num ++;
		}
		i++;
    }

    return num;

}
