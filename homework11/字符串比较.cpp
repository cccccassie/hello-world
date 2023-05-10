#include<iostream>
#include<string.h>
using namespace std;
class cmp{
    private:
    char a1[10000];
    char a2[10000];
    public:
    cmp(){for(int i=0;i<10000;i++)
    {
        a1[i]=a2[i]='\0';
    }}
    void in();
    ~cmp(){};
    void find();
};
void cmp::in()
{
    gets(a2);
    gets(a1);
}
void cmp::find()
{
    int num1=strlen(a1);
    int num2=strlen(a2);
    int flag=1;
    for(int i=0;i<num1;i++)
    {
        int cnt=0;
        int count=0;
        for(int j=0;j<num2;j++)
        {
            if(a1[i+cnt++]==a2[j])
            count++;
        }
        if(count==num2)
        {
            flag=0;
            cout<<i;
            if(i!=num1-num2)
            cout<<' ';
        }
    }
    if(flag)
    cout<<"-1";
}
int main()
{
    cmp s;
    s.in();
    s.find();
    return 0;
}