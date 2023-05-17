#include<iostream>
#include<string.h>
using namespace std;
class by{
    private:
    char a[32];
    public:
    by(char b[])
    {
        int cnt=0;
        for(int i=0;i<32;i++)
        {
            a[cnt++]=b[i];
        }
    }
    ~by(){};
    void out();
};
void by::out()
{
    for(int i=31;i>=0;i--)
    {
        cout<<a[i];
    }
}
int main()
{
    char a[32];
    for(int i=0;i<32;i++)
    {
        scanf("%c",&a[i]);
    }
    by b(a);
    b.out();
    return 0;
}