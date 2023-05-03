#include<iostream>
using namespace std;
class dxs{
    private:
    int a [101]={0};
    public:
    dxs(){
    }
    ~dxs(){};
    void sum(int b,int c);
    void print();
};
void dxs::sum(int b,int c)
{
    a[b]+=c;
}
void dxs::print()
{
    for(int i=101;i>0;i--)
    {
        if(a[i]!=0)
        {
            cout<<i<<'x'<<a[i];
            int flag=0;
            for(int j=i-1;j>0;j--)
            {
                if(a[j]!=0)
                flag=1;
            }
            if(flag)
            {
                cout<<'+';
            }
        }
    }
}
int main()
{
    dxs n;
    int a,b;
    cin>>a>>b;
    while(a!=0)
    {
        n.sum(a,b);
        cin>>a>>b;
    }
    cin>>a>>b;
    while(a!=0)
    {
         n.sum(a,b);
        cin>>a>>b;
    }
    n.print();
    return 0;
}