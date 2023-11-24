#include <stdio.h>
/*
for(INIT;TEST;INCREMENTER)
{
	CODE;
}
*/
int main(int argc , char* argv[])
{
	int i = 0;
    char* state[] = {
        "ysyx","RiscV",
        "DZKD","CDXY",
        "\0"
    };
    argv[1] = state[0];
    state[2] = argv[2];
	for(i = 0; i < argc ; i++)
    {
        printf("No.%d arg in %d is %s.\n",i,argc,argv[i]);
    }

    const int num_status = 10;
    for(int i = 0 ; i < num_status ; i++)
    {
        printf("state No.%d is %s \n",i,state[i]);
    }
    char* charlist = "HAHA";
    printf("%s",charlist);
    return 0;
}

