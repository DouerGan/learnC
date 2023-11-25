#include <stdio.h>
#include <ctype.h>
void print_string(char* str);
void print_arguments(int argc, char* argv[])
{
    for(int i = 1 ; i < argc ; i++)
    {
        print_string(argv[i]);
    }
}

void print_string(char* str)
{
    for(int i = 0 ; str[i] != '\0' ; i++)//打印一个字符数组（字符串）结束的标志就是遇到了空字符
    {
        printf("%c \n",str[i]);
    }
}
int main(int argc , char* argv[])
{
    print_arguments(argc,argv);
    return 0;
}
