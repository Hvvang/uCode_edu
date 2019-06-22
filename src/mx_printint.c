void mx_printchar(char c);

void mx_printint(int n) {
    if(n == 0) {
	mx_printchar('0');
        return;
    }
    int i = 0;
    char arr[12];
    long temp = (long)n;
    if(temp < 0) {
        mx_printchar('-');
        temp *= -1; 
    }
    for( ; temp > 0; i++) {
        arr[i] = temp % 10 + 48;
	temp /= 10;
    }
    for(i-- ; i >= 0; i--) {
        mx_printchar(arr[i]);
    }
}
