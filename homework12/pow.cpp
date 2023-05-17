#include<iostream>
#include<string.h>
using namespace std;
int mypow(int x,int n)
{
    int out=x;
    for(int i=1;i<n;i++)
    {
        out*=x;
    }
    return out;
}
int main()
{
    int x,n;
    scanf("%d,%d",&x,&n);
    cout<<mypow(x,n);
    return 0;
}