#include<iostream>
using namespace std;

int main()
{
	int n, m, a;
	cin >> n;
	int aa[n];
	for(int i=0; i<n; ++i)
	    cin >> aa[i];
	cin >> a;
	int t=0;
	for(int i=0; i<n; ++i)
	{
		t++;
		if(a == aa[i])
			break;
	}
	cout << t;
	return 0;
}
