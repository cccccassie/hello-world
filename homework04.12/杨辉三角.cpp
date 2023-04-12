#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1][n+1];
    a[1][1]=1;
    if(n<2)
    {
        if(n==2)
        {
            a[2][1]=a[2][2]=1;
        }
    }
    else
    {
         a[2][1]=a[2][2]=1;
        for(int i=2;i<=n;i++)
        {
            a[i][1]=a[i][i]=1;
            for(int j=2;j<=i-1;j++)
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
