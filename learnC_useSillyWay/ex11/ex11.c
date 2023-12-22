#include <stdio.h>
int main(int argc , char* argv[])
{
    int i = 0;
    while(i < argc)
    {
        printf("Arg No.%d is %s.\n",i,argv[i]);
        i++;
    }
    char* state[] = {
        "ysyx","riscv",
        "cjq","dzkdcdxy"
    };
    int charListLen = sizeof(state) / sizeof(state[0]);
    i = 0;
    while(i < argc)
    {
        state[i] = argv[i];
        i++;
    }

    int j = charListLen - 1;
    while(j > -1)
    {
        printf("the char list No.%d is %s \n",j,state[j]);
        j--;
    }
    return 0;
}
