#include "_printf.h"
#include <string.h>  
int print_char(va_list args)
{
char c = va_arg(args, int);
return write(1, &c, 1);
}

int print_string(va_list args)
{
char *str = va_arg(args, char *);
int compteur = 0;
if (!str)
str = "(null)";
while (*str)
{
write(1, str++, 1);
compteur++;
}
return compteur;
}


int print_percent(va_list args)
{
(void)args; 
return write(1, "%", 1);
}

