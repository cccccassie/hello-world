#include<iostream>
using namespace std;
class professor{
public:
int is(int a[],int n,int k);
void show(int a[],int n,int k)
{
    if(is(a,n,k))
    cout<<"yes";
    else
    cout<<"no";
}
professor(){};
~professor(){};
};
int professor::is(int a[],int n,int k)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=0)
        cnt++;
    }
    if(cnt<k)
    return 1;
    else
    return 0;
}
int main()
{
    int n,k;
    int a[100];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    cin>>a[i];
    professor b;
    b.show(a,n,k);
    return 0;
}
