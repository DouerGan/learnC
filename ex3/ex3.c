#include <stdio.h>

int main()
{
	int age = 18;
	int height = 183;
	printf("I am %d years old.\n",age);
	printf("I am %d centimeters tall.\n",height);
	int num = 8;
	float a = 3.4;
	double pi = 3.1415926535;
	char b = 'A';
	char c[] = "hello world";
	printf("%d\n",num);//输出十进制整数
	printf("%o\n",num);//输出八进制整数
	printf("%d\n",num);//输出十六进制整数

	printf("%15.10f\n",pi);//输出宽度5，小数3位，小数形式输出
	printf("%e\n",pi);//小数形式输出
	printf("%c\n",b);//输出字符
	printf("%s\n",c);//输出字符串
	return 0;
}
