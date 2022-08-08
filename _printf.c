void _printf(const char *format, ...) {
    char *s;
    va_list lst;
    va_start(lst, format);
    while(*format != '\0')
    {
        if(*format != '%')
        {
            putchar(*format);
            format++;
            continue;
        }

        format++;

        if(*format == '\0')
        {
            break;
        }

        switch(*format)
        {
            case 's': fputs(va_arg(lst, char *), stdout); break;
            case 'c': putchar(va_arg(lst, int)); break;
        }
        format++;
    }
}
