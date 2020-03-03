#include<cstdio>
#include<cstring>
int main()
{
	char a[10], b[10];
	int i, n, l=2;
	gets(a);
	gets(b);
	n = strlen(a);
	if(strlen(b) != n)
	    l = 1;
	else
	{
		for(i=0; i<n; ++i)
	        if(a[i] == b[i] || a[i] == b[i]+32 || a[i]+32 == b[i])
	            if(a[i] != b[i])
	                l = 3;
	            else;//必不可少 
	        else
	        {
	        	l = 4;
	        	break;
	        }
	}
	printf("%d", l);
	return 0;
} 
