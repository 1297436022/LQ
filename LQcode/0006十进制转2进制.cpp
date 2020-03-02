#include<stdio.h>
int fact(int n)
{
	if(n < 2)
	    return n;
	else
	    return fact(n/2)*10+n%2;
}
//十进制转换成其他进制可以使用整除倒序取余法。
//其他进制转换成十进制各个位置乘以10进制相应的位权即可
//（如果是16进制，那么会出现字母，可以用整形来存储。
//字符串可以做加减运算，原理是ASCII码之间的运算） 
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", fact(n));
	return 0;
}
