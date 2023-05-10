#include<iostream>
#include<string.h>
using namespace std;
class miyao{
    private:
    char s[100];
    int k;
    public:
    miyao(){
        for(int i=0;i<100;i++)
        s[i]='\0';
    }
    ~miyao(){};
    void geshihua();
    void in();
};
void miyao::in()
{
    int cnt=0;
    char ch; 
    for(int i=0;;i++)
    {
        scanf("%c",&ch);
        if(ch=='\n')
        break;
        if(ch!='-')
        {
            if(ch>='0'&&ch<='9')
            {
                s[cnt++]=ch;
            }
            else
            s[cnt++]=toupper(ch);
        }
    }
    cin>>k;
}
void miyao::geshihua()
{
    int len=strlen(s);
    int cnt=len%k;
    if(cnt==0)
    {
        for(int i=0;i<len;i=i+k)
        {
            for(int j=i;j<i+k;j++)
            cout<<s[j];
            if(i!=len-k)
            cout<<'-';
        }
    }
    else
    {
        for(int i=0;i<cnt;i++)
        {
            cout<<s[i];
        }
        if(len-cnt!=0)
        cout<<'-';
        for(int i=cnt;i<len;i=i+k)
        {
             for(int j=i;j<i+k;j++)
            cout<<s[j];
            if(i!=len-k)
            cout<<'-';
        }
    }
}
int main()
{
    miyao a;
    a.in();
    a.geshihua();
}