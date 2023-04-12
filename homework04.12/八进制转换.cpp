#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[100]={0};
    int x=0;
    while(n!=0)
    {
        a[x++]=n%8;
        n/=8;
    }
    for(int i=x-1;i>=0;i--)
    {
        cout<<a[i];
    }
    return 0;
}
