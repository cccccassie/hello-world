#include<iostream>
using namespace std;
class odd{
    private:
    int num;
    public:
    odd(int n):num(n)
    {

    }
    ~odd()
    {

    }
    int even();
};
int odd::even()
{
    if(num%2==0)
    {
        return 1;
    }
    else
    return 0;
}
int main()
{
    int n;
    int sum=0;
    cin>>n;
    while(n>0)
    {
        odd a(n);
        if(a.even()==0)
        sum+=n;
        cin>>n;
    }
    cout<<sum;
    return 0;
}