#include <stdio.h>
int add(int a , int b)
{
    while(b != 0)
    {
        int c = a & b;
        a = a ^ b ;
        b = c << 1;
    }
    return a;
}
int main(int argc , char* argv[])
{
    printf("%d \n",add(14,29));
    if(argc != 2)
    {
        printf("this program only use 1 argument\n");
        return 1;
    }
    for(int i = 0 , letter =argv[1][i] ; argv[1][i] != '\0' ; i++,letter =argv[1][i])
    {
        switch(letter)
        {
            case 'a':
            case 'A': printf("No.%d is A/a \n",i); break;
            case 'e':
            case 'E': printf("No.%d is E/e \n",i); break;
            case 'i':
            case 'I': printf("No.%d is I/i \n",i); break;
            case 'o':
            case 'O': printf("No.%d is O/o \n",i); break;
            case 'u':
            case 'U': printf("No.%d is U/u \n",i); break;
            default : printf("No.%d is %c ,is not a vowel. \n",i,argv[1][i]); break;
        }
    }
    return 0;
}
