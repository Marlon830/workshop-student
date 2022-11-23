void putstr(int x, int y, char * str)
{
    for (int i = 0; str[i] != '\0'; i++, x++){
        if (x > 80) {
            x = 0;
            y++;
        }
        putchar(x, y, buff[i]);
    }
}
