#include<stdio.h>
#include<math.h>
int main()
{
	int r;
	double s, Pi;
	scanf("%d", &r);
	Pi = atan(1.0)*4;
	s = Pi * r * r;
	printf("%.7lf", s);
	return 0;
} 
