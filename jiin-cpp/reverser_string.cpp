#include <iostream>

void reverse_string(char *str);

int main()
{
    char str[] = "hello world";

    reverse_string(str);

    printf("%s", str);

    return 0;
}

void reverse_string(char *str)
{
    char *end = str;
    char tmp;

    if (str)
    {
        while(*end)
        {
            ++end;
        }
        --end;
    }

    while(str < end)
    {
        tmp = *str;
        *str++ = *end;
        *end-- = tmp;

    }

}