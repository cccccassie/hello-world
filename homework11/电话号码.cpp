
#include<iostream>
#include<string.h>
using namespace std;
class num{
    private:
    char s[100];
    public:
    num(){
        for(int i=0;i<100;i++)
        s[i]='\0';
    }
    ~num(){};
    void in();
};
void num::in()
{
    cin>>s;
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]==0||s[i]==1)
        {
            cout<<s[i];

        }
        else
        if(s[i]>='A'&&s[i]<='B')
        {
            cout<<2;
        }
        else
        if(s[i]>='D'&&s[i]<='F')
        {
            cout<<3;
        }
        else
        if(s[i]>='G'&&s[i]<='I')
        {
            cout<<4;
        }
        else
        if(s[i]>='J'&&s[i]<='L')
        cout<<5;
        else
        if(s[i]>='M'&&s[i]<='Q')
        cout<<6;
        else
        if(s[i]>='P'&&s[i]<='S')
        cout<<7;
        else
        if(s[i]>='T'&&s[i]<='V')
        cout<<8;
        else
        if(s[i]>='w'&&s[i]<='Z')
        cout<<9;
    }
}
int main()
{
    num a;
    a.in();
    return 0;
}