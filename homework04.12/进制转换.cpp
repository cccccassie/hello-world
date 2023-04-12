#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
      int c[100]={0};
    int x=0;
    while(a!=0)
    {
        c[x++]=a%b;
        a/=b;
    }
    for(int j=x-1;j>=0;j--)
    {
        cout<<c[j];
    }
    cout<<endl;
    }
    return 0;
}
