#include<stdio.h>

int main()
{
	int a[50][50];
	int i, j, n, s;
	scanf("%d", &n);
	for(i=0; i<n; ++i)
	    for(j=0; j<n; ++j)
	        scanf("%d", &a[i][j]);
	for(i=0; i<n; ++i)
	{
		s=0;
		for(j=0; j<n; ++j)
		    s = s+a[i][j];
		if(s>n/2.0)
		    printf("%d ", i+1);
	}
	return 0;
} 
