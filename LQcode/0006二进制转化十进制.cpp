#include<stdio.h>
int main()
{
	char ch;
	int a=0;
	//逗号表达式的规则是从左往右依次执行语句，
	//并返回最后一个语句的结果，
	//如果计算到最后最后一个表达式的值为真，
	//则整个逗号表达式为真，否则为假。 
	while(ch=getchar(), ch != '\n')
	    a = a*2 + (ch - '0');
    printf("%d\n", a);
    return 0;
} 
