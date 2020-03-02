#include<cstdio>
#include<iostream>
using namespace std; 

int main()
{
	int year;
	scanf("%d", &year);
	if(year%4 == 0 && year%100 != 0 || year%400 == 0)
	    cout << "yes\n";
	else
	    cout << "no\n";
	return 0;
} 
