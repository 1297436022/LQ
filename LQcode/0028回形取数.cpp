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
    i=0,j=1;//��ʼ����Ϊ0
    while(k<=m*n)
    {
        while(i+1<=m&&num[i+1][j]!=-1)//����ȡ��
        {
            cout<<num[++i][j]<<" ";
            num[i][j]=-1;//��ȡ����λ����Ϊ-1
            k++;
        }
        while(j+1<=n&&num[i][j+1]!=-1)//����ȡ��
        {
            cout<<num[i][++j]<<" ";
            num[i][j]=-1;
            k++;
        }
        while(i-1>0&&num[i-1][j]!=-1)//����ȡ��
        {
            cout<<num[--i][j]<<" ";
            num[i][j]=-1;
            k++;
        }
        while(j-1>0&&num[i][j-1]!=-1)//����ȡ��
        {
            cout<<num[i][--j]<<" ";
            num[i][j]=-1;
            k++;
        }
    }
    cout<<endl;
    return 0;
} 
