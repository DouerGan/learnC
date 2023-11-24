#include <stdio.h>
int main(int argc , char* argv[])
{
    if(argc == 1)
    {
        printf("You have no argument.\n");
    }else if(argc > 4)
    {
        printf("You have too many arguments(more than 3!)\n");
    }else
    {
        for(int i = 1 ; i < argc ; i++)
        {
            printf("No.%d argument is %s \n",i,argv[i]);
        }
    }
    return 0;
}
