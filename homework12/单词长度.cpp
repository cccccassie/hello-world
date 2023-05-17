#include<iostream>
#include<string.h>
using namespace std;
class danci{
private:
    char text[100];
public:
    danci(char a[]){
        int len=strlen(a);
        int cnt=0;
        for(int i=0;i<len;i++)
        {
            text[cnt++]=a[i];
        }
    }
    ~danci(){}
    void execute();
};
void danci::execute()
{
    int len=strlen(text);
    int cnt=0;
    for(int i=0;i<len;i++)
    {
        if(text[i]!='.')
        {
            if(text[i]!=' ')
            {
                cnt++;
            }
            else
            {
                if(cnt!=0)
                {
                    cout<<cnt<<' ';
                    cnt=0;
                }
            }
        }
        else
        {
            cout<<cnt;
        }
    }
}
int main()
{
    char a[100];
    for(int i=0;i<100;i++)
    {
        scanf("%c",&a[i]);
        if(a[i]=='.')
        break;
    }
    danci b(a);
    b.execute();
    return 0;
}