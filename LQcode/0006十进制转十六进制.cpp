#include<stdio.h>
int main()
{
	int n, m, i=0;
	int num[100];
	//´ò±í 
	char hex[16] = {'0','1','2','3','4','5',
	                '6','7','8','9','A','B','C','D','E','F'};
	scanf("%d", &n);
	if(n == 0)
	    printf("%c", hex[0]);
	while(n > 0)
	{
		num[i++] = n%16;
		n = n/16;
	}
	for(i=i-1; i>=0; --i)
	{
		m = num[i];
		printf("%c", hex[m]);
	}
	printf("\n");
	return 0;
}
