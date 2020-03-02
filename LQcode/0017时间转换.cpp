#include<iostream>
using namespace std;

int main()
{
	int n, H, M, S;
	cin >> n;
	H = n/3600;
	M = n%3600/60;
	S = n%3600%60;
	cout << H << ":" << M << ":" << S << endl;
	return 0;
}
