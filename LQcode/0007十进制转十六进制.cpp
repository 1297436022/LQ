#include<stdio.h>

char data[] = {'0','1','2','3','4','5',
	                '6','7','8','9','A','B','C','D','E','F'};
void Print(char* num, int n)
{
	int i;
	for(i=n-1; i>=0; --i)
	    printf("%c", num[i]);
    //printf("\0");
	printf("\n");
}

int Transform(char* num, long long value)
{
	int n=0;
	while(value >= 16)
	{
		num[n++] = data[value%16];
		value /= 16;
	}
	num[n++] = data[value%16];
	return n;
}

int main()
{
	long long value;
	char num[10];
	int n;
	scanf("%l64d", &value);
	n = Transform(num, value);
	Print(num, n); 
	return 0;
} 
