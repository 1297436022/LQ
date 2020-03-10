#include <iostream>
using namespace std;
int main()
{
    int num[201][201]={0},m,n,i,k,j;
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        for(k=1;k<=n;k++)
        {
            cin>>num[i][k];
        }
    }
    k=1;
    i=0,j=1;//初始行置为0
    while(k<=m*n)
    {
        while(i+1<=m&&num[i+1][j]!=-1)//向下取数
        {
            cout<<num[++i][j]<<" ";
            num[i][j]=-1;//将取过的位置置为-1
            k++;
        }
        while(j+1<=n&&num[i][j+1]!=-1)//向右取数
        {
            cout<<num[i][++j]<<" ";
            num[i][j]=-1;
            k++;
        }
        while(i-1>0&&num[i-1][j]!=-1)//向上取数
        {
            cout<<num[--i][j]<<" ";
            num[i][j]=-1;
            k++;
        }
        while(j-1>0&&num[i][j-1]!=-1)//向左取数
        {
            cout<<num[i][--j]<<" ";
            num[i][j]=-1;
            k++;
        }
    }
    cout<<endl;
    return 0;
} 
