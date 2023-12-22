#include "stdio.h"
int intReverse2(int a)
{
    if((a<10) || (a>99)) printf("this int value out of prescribed limit(10-99)");
    return a%10*10 + a/10;
}
int isPrimeNum2(int a)
{
    if(a <= 1) return 0;
    int isPrimeNum = 1;
    for(int i=2;i<a;i++){
        if(a%i==0){
            isPrimeNum = 0;
            break;
        }
    }
    return isPrimeNum;
}

int isAbsolutePrime(int a)
{
    return (isPrimeNum2(a)&isPrimeNum2(intReverse2(a)));
}
int main(int argc,char* argv[])
{
    int adder = 0;
    for(int i=10;i<100;i++){
        if(isAbsolutePrime(i)){
            adder+=1;
            printf("%d is absolute prime number\n",i);
            continue;
        }
        printf("%d not\n",i);
    }
    printf("in 10 to 99 ,total %d absolute prime number!\n",adder);
    return 0;
}

