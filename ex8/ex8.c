#include <stdio.h>
int main(int argc , char * argv[])
{
	int areas[] = {10,12,13,14,20};
	char name[] = "Cjq";
	char full_name[] = {'c','h','e','n','j','i','a','q','i','\0'};
	printf("The size of an int : %ld. \n",sizeof(int));
	printf("The size of areas : %ld. \n",sizeof(areas));
	printf("the number of int in area : %ld \n",sizeof(areas)/sizeof(int));
	printf("the first int of areas : %d ,the second : %d. \n",areas[0],areas[1]);


}
