#include<iostream>
using namespace std;

int main()
{
    int a[100][100];
    int n,flag=0;
    cin>>n;
    
    for(int y=0;y<n;y++)
    {
        for(int x=0;x<n;x++)
        {
            cin>>a[y][x];
        }
    }

    for(int y=0;y<n;y++)
    {
        for(int x=0;x<n;x++)
        {
            int flag=2;
            for(int m=0;m<n;m++)
            {
                if(a[m][x]<a[y][x])
                {
                    flag--;
                    break;
                }

            }
            for(int p=0;p<n;p++)
            {
                if(a[y][p]>a[y][x])
                {
                    flag--;
                    break;
                }
            }
            if(flag==2)
            {
                cout<<y<<' '<<x;
                return 0;
            }
        }
    }
}
