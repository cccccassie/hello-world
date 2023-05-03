#include<iostream>
using namespace std;
class cnt{
    private:
    int a,b;
    public:
    cnt(int a1,int b1):a(a1),b(b1)
    {

    }
    ~cnt()
    {

    }
    int max();
    int min();
};
int cnt::max()
{
     int x;
     if(a>b)
     {
        x=b;
     }else
     x=a;
     int max=0;
     for(int i=1;i<=x;i++)
     {
        if(a%i==0&&b%i==0)
        {
            if(i>max)
            max=i;
        }
     }
     return max;
}
int cnt::min()
{
    int x;
    if(a>b)
    x=a;
    else
    x=b;
    for(int i=x;;i++)
    {
        if(i%a==0&&i%b==0)
        {
            x=i;
            break;
        }
    }
    return x;
}
int main()
{
    int a1,b1;
    cin>>a1>>b1;
    cnt n(a1,b1);
    cout<<n.max()<<endl;
    cout<<n.min()<<endl;
    return 0;
}