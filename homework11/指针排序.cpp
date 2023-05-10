#include<iostream>
using namespace std;
class nanbeng{
    private:
    int n;
    int a[100];
    public:
    void sort(int num[],int n);
    nanbeng(){};
    ~nanbeng(){};
};
void nanbeng::sort(int num[],int n)
{
    for(int i=0;i<n;i++)
    {
        a[i]=num[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
        if(i!=n-1)
        cout<<' ';
    }
}
int main()
{
    int num[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    nanbeng s;
    s.sort(num,n);
    return 0;
}